#include <gmp.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	mpz_t num1, num2, result;

	if (argc != 3)
		return 98;

	mpz_init(num1);
	mpz_init(num2);
	mpz_init(result);

	mpz_set_str(num1, argv[1], 10);
	mpz_set_str(num2, argv[2], 10);

	mpz_mul(result, num1, num2);

	gmp_printf("%Zd\n", result);

	mpz_clear(num1);
	mpz_clear(num2);
	mpz_clear(result);

	return 0;
}

