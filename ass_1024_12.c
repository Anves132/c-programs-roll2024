#include <stdio.h>
int main()
 {

    char str[100];
  
    int i, j, start, end;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)

    {

    end = i - 1;

    }

    for (i = end; i >= 0; i--) 

    {

        if (str[i] == ' ' || i == 0) 

        {

            if (i == 0) 
             
                start = 0;

            else 

                start = i + 1;

   for (j = start; j <= end; j++) 

            {

                if (str[j] != '\n')  
                 
                {

                 printf("%c", str[j]);

                 }

            }

            end = i - 1;

            printf(" ");
        }

    }

    return 0;

}



