#include<stdio.h>

int main()

{

int i,conut=0;

char str[100];

 printf("Enter the word(small letters only ):-");

    fgets(str,sizeof(str),stdin);

  for(i=0;str[i]!='\0';i++)

{

    if(str[i]>='a'&&str[i]<='z')

{

    if (!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))

{

conut++;

}

}

}

   printf("consonants=%d\n",conut);
return 0;

} 

