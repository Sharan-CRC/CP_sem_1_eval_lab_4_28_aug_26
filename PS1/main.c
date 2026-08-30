#include <stdio.h>
#include <string.h>

int main()
{
    char name[100]; //initializing placeholder variable for name

    //taking user input
    printf("Enter your name: ");
    scanf("%s", name);

    int i = strlen(name); //setting the variable i to be the length of the inputted string

    //printing the final output

    printf("\n\nThe reversed name is:");
    for (i; i>=0; i--){
        printf("%c", name[i]);

    }
    //formatting the output
    printf("\n\n\n");
    return 0;
}
