#include<stdio.h>

#include<string.h>

int main()

{

  char s1[29],s2[29];

       printf("Enter the string1:-");

     scanf("%s",s1);

       printf("Enter the string2:-");

     scanf("%s",s2);

   if(strcmp(s1,s2)==0)

{

    printf("string are equal");

}

else

{

    printf("string are not equal");

}

   return 0;

}
 

