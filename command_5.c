#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < argc; i++) { // iterate through arguments
        if (argv[i][0] == '-') { // if they contain '-' character in the first character of the argument...
            printf("%s\n", argv[i]); // print the command
        }
    }
    return 0;
}