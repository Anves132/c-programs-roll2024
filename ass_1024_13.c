#include<stdio.h>


int main()


{


char str[34],i,vowels;


  printf("Enter the word:-");


  scanf("%s",str);


for(i=0;str[i]!='\0';i++)


{


if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')


{


 vowels++;


}


}


printf("vowels=%d",vowels);


return 0;


}


