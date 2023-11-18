#include <unistd.h>

int dprintf(const char* format, ...) {

    // Print the custom message
    int result = write(1, "--> Please make me win!\n", 24);

    return result;
}

