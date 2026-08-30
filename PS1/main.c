#include <stdio.h>
int main()
{
    int n;
    int inc = 0;
    //asking user for length of number
    printf("Enter the length of your number: ");
    scanf("%d", &n);
    int num[n];
    //getting user input for the digits of the number
    while (inc<=(n-1)){
        printf("Enter the digit no. %d : ", inc+1);
        scanf("%d", &num[inc]);
        inc++;
    }
    printf("\n");
    printf("Your number is:\n");
    for (int m = 0; m<n; m++){
        printf("%d", num[m]);
    }
    printf("\n");
    printf("The reversed number is:\n");
    //printing the reversed number
    for (int t = 0; t<n; t++){
        printf("%d", num[inc-1]);
        inc--;
    }
    printf("\n");
    return 0;
}
