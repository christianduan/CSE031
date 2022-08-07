#include <stdio.h>

int main(){
    char str[100];
    int senTimes;
    int typo;

    /* Initializes the program by asking for the number of repetitions */
    printf("Enter the number of times to repeat the punishment phrase: ");
    scanf("%d", &senTimes);
    
    /* Determines whether the number of repetitions is a valid value */
    while(senTimes <= 0){
        printf("You entered an invalid value for the number of repetitions! \n");
        printf("Enter the number of times to repeat the punishment phrase again: ");
        scanf("%d", &senTimes);
    }
    /* If the number of repetitions is a valid value, ask for where to insert typo */
    printf("Enter the repetition line where you want to introduce the typo: ");
    scanf("%d", &typo);

    /* Determines whether the repetition line is a valid value */
    while(typo <= 0 || typo > senTimes){
        printf("You entered an invalid value for the typo placement! \n");
        printf("Enter the repetition line where you want to introduce the typo again: ");
        scanf("%d", &typo);
    }
    /* For loop to print out the punishment sentence */
    for(int i = 0; i < senTimes; i++){
        /* Correct line */
        if (i < typo - 1 || i > typo - 1){
            printf("Programming in C is fun! \n");   
        }
        /* Prints the typo line at specified line */
        else{
            printf("Progranming in c is phun! \n");
        }
    }

    return 0;
}