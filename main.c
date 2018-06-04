#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello %s!\n", name);
    return 0;
}

=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
    return 0;
}
>>>>>>> 0184d0bd0c3d42b692666c94f85bb21108595cb3
