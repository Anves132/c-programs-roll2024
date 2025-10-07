#include<stdio.h>


int main()


{


int num,i,sum=0,j;


printf("Enter the number :-");


scanf("%d",&num);

for(i=1;i<=num/2;i++)


{


    if(num%i==0)


    {


        sum+=i;


    }


}


if(sum==num&&num!=0)


{


printf("%d is a perfect number",num);
}
else 
{
    printf("%d is not prefect number ",num);
}
return 0;
}




