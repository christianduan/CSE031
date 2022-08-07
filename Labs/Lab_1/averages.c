#include <stdio.h>
#include <stdlib.h>

int main(){
    int in, iter = 1, ordinal = 0, sum = 0, absNum = 0, total = 0, evenTotal = 0, oddTotal = 0;
    float evenSum = 0, oddSum = 0, evenAvg = 0, oddAvg = 0;

    /* User inputs integers to find the average of */
    printf("Please enter the 1st integer: ");
    scanf("%d", &in);

    /* Does not run program if there are no integers */
    if(in == 0){
        printf("There is no average to compute! \n");
    }
    /* Finds the ordinal listing of integers */
    else{
        while(in != 0){
            /* Splits inputted integers into single digits to find even/odd sums */
            absNum = abs(in);
            while (absNum != 0) {
                sum = sum + absNum % 10;
                absNum = absNum / 10;
            }

            if(sum % 2 == 0){
                evenTotal++;
                // printf("%d \n", evenTotal);
                evenSum = evenSum + in;
                // printf("%f \n", evenSum);
            }
            else{
                oddTotal++;
                // printf("%d \n", oddTotal);
                oddSum = oddSum + in;
                // printf("%f \n", oddSum);
            }
            
            sum = 0;

            ordinal = iter % 10;
            iter++;
            printf("Please enter the ");
            /* Adds the ordinal suffix to any number that does not contain a 1, 2, or 3 in the ones place except 11, 12, and 13 */
            if (ordinal > 2 || iter == 11 || iter == 12 || iter == 13){
                printf("%d", iter);
                printf("th integer: ");
                scanf("%d", &in);
            }
            /* Adds the ordinal suffix to any number contains a 3 in the ones place except 13 */
            else if(ordinal == 2){
                printf("%d", iter);
                printf("rd integer: ");
                scanf("%d", &in);
            }
            /* Adds the ordinal suffix to any number contains a 2 in the ones place except 12 */
            else if(ordinal == 1){
                printf("%d", iter);
                printf("nd integer: ");
                scanf("%d", &in);
            }
            /* Adds the ordinal suffix to any number contains a 1 in the ones place except 11 */
            else{
                printf("%d", iter);
                printf("st integer: ");
                scanf("%d", &in);
            }
        }

        /* Calculates the averages */
        if(evenTotal > 0 && oddTotal == 0){
            evenAvg = evenSum / evenTotal; 
        }
        else if(oddTotal > 0 && evenTotal == 0){
            oddAvg = oddSum / oddTotal;
        }
        else{
            evenAvg = evenSum / evenTotal;
            oddAvg = oddSum / oddTotal;
        }

        if(oddTotal == 0){
            /* Prints even average */
            printf("Average of inputs whose digits sum up to an even number: ");
            printf("%.2f", evenAvg);
            printf("\n");
            
        }
        else if(evenTotal == 0){
            /* Prints odd average */
            printf("Average of inputs whose digits sum up to an odd number: ");
            printf("%.2f", oddAvg);
            printf("\n");
        }
        else{
            printf("Average of inputs whose digits sum up to an even number: ");
            printf("%.2f", evenAvg);
            printf("\n");
            printf("Average of inputs whose digits sum up to an odd number: ");
            printf("%.2f", oddAvg);
            printf("\n");
        }
        
    }

    return 0;
}
