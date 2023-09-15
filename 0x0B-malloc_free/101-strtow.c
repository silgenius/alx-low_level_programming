#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * count_words - Count the number of words in a string
 * separated by spaces.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Split a string into words based on spaces.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words). The last element of
 * the array is NULL.
 */
char **strtow(char *str)
{
	int num_words = count_words(str);
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	int word_index;
	char *token;
	int i;

	if (str == NULL || *str == '\0')
		return (NULL);

	if (num_words == 0)
		return (NULL);

	if (words == NULL)
		return (NULL);
	word_index = 0;

	token = strtok(str, " ");

	while (token != NULL)
	{
		words[word_index] = strdup(token);
		if (words[word_index] == NULL)
		{
			for (i = 0; i < word_index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		word_index++;
		token = strtok(NULL, " ");
	}

	words[word_index] = NULL;
	return (words);
}
