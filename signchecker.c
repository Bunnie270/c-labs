#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    //prompt to enter a number
    printf("Enter the number you wish to check:\n");
    scanf("%f", &number);
    //Checking if the numberis negative, positive or zero
    if (number > 0){
        printf("The number you entered is positive. \n");
    }
    else if (number < 0){
        printf("The number you entered is negative. \n");
    }
    else {
        printf("The number you entered is zero. \n");
    }
    return 0;
}
