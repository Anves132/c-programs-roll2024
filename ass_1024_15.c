#include <stdio.h>


int main() 


{


    int i, num, largest;


        printf("Enter 5 numbers:\n");


    scanf("%d", &largest);


    for(i = 1; i < 5; i++) 


{


        scanf("%d", &num);

        if(num > largest)


        {

            largest = num;  


        }


    }


       printf("The largest number is: %d\n", largest);


    return 0;


}


