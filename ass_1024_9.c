#include<stdio.h>


int main()


{


char str1[24],str2[25];


int lenth1=0,lenth2=0,i;


  printf("Enter fist string:-");


   fgets(str1,sizeof(str1),stdin);


  printf("Enter second string:-");


    fgets(str2,sizeof(str2),stdin);


for(i=0;str1[i]!='\0';i++)


{


        if(str1[i]!='\n')


        {


             lenth1++;


        }


}


for(i=0;str2[i]!='\0';i++)


{


  if(str2[i]!='\n')

   {


             lenth2++;


        }


}


if(lenth1>lenth2)


{


     printf("Fist string are long");


}


else if(lenth1<lenth2)


{


     printf("second string are long");


}


else


{


      printf("Both are equal ");


}


  return 0;


}





