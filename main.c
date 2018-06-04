#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */

<<<<<<< HEAD
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello, %s %s!\n", first, last);
=======
    printf("Hello %s!\n", name);
>>>>>>> parent of 090e816... commit +
    return 0;
}

