#include<stdio.h>


int main()


{


int num,i,temp=1;


printf("Enter the number:-");


scanf("%d",&num);

for(i=1;i<=num;i++)


{


    printf("\n%d",i);


    temp=temp*i;


}

printf("\nFactorial = %d",temp);


return 0;

}


