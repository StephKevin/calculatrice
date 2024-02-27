#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation ;
    double  b , resultat;
    //char ch = '\43';
   // printf("%c\n",ch);
    printf("faite une opération : \n");
    scanf("%lf\n",&resultat);
    printf("");
    scanf("%c",&operation);
    while(operation != '=')
    {
        printf("");
        scanf("%lf", &b);
        if(operation == '-')
        {
            resultat = resultat - b;
        }
       else if(operation == '*')
           {
               resultat = resultat * b;
           }

        else if(operation == '/')
           {
               resultat = resultat / b;
           }
       else if(operation == '+')
       {
           resultat = resultat + b ;
       }
       printf("");
       scanf("%c",&operation);
    }
    printf("%lf\n",resultat);
    return 0;
}
