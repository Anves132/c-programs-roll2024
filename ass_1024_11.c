#include<stdio.h>


#include<string.h>


int main()


{


char str[234];


int i,count=1;

printf("Enter the word :-");


fgets(str,sizeof(str),stdin);


for(i=0;str[i]!='\0';i++)


{


    if(str[i]==' ' &&str[i+1]!=' '&&str[i+1]!='\0')


{


count++;


}


}


printf("Number of Words  = %d",count);


return 0;


}


