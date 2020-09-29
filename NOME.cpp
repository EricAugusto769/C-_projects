#include <stdio.h>
#include <stdlib.h>
int main (void) {

    char *name;

    printf("Whats your name? ");
    scanf("%s", &name);
    printf("\nyour name is %s", &name);
system("pause");
}
