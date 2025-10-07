#include<stdio.h>

int main()

{

int num,i;

printf("Enter the number :-");

scanf("%d",&num);

if(num<0)

{

     printf("not exist (enter only positive number) ");

}

for(i=0;i*i<=num;i++);

{

    if(i*i==num);

{

    printf("%d is a perfect square",num);

return 0;

}
}
}


