#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the relational operator\n");
    while(scanf("%c",&ch)==1)
    {

    if(ch== '+')
        {
            printf("Addition");
        }
        else if(ch== '-')
        {
            printf("Subtraction");
        }
        else if(ch== '*')
        {
            printf("Multiplication");
        }
        else if(ch== '/')
        {
            printf("Divition");
        }
        else if(ch== '<')
        {
            printf("Less than");
        }
        else if(ch== '>')
        {
            printf("Greater than");
        }
        else if((ch== '<') && (ch=='='))
        {
            printf("Less than equal");

        }
         else if((ch== '>') || (ch=='='))
        {
            printf("Greater than equal");
        }
    }
}
