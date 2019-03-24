#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the relational operator\n");
    while(scanf("%c",&ch)==1)
    {

        if(ch=='+')
            printf("Addition");
        else if(ch=='-')
            printf("Substraction");
        else if(ch=='*')
            printf("Multiplication");
        else if(ch=='/')
            printf("Division");
        else if(ch=='>')
            printf("Greater than");
        else if(ch=='<')
            printf("Less than");
        else if(ch==('>')&&('='))
            printf("Greater than or equal to");
        else if(ch=='<=')
            printf("Less than or equal to");
            //
            //else
                //printf("The character is not found");
    }
}
