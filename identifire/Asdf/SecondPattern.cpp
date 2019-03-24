#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int state[4][3];
int automata(int S,int I);
int main()
{
    int S=0,k=0,I=0,N;
    char T[50];
    char P[50]={"abba"};
    gets(T);
    N=strlen(T);

    state[0][0]=1;
    state[0][1]=0;
    state[0][2]=0;
    state[1][0]=0;
    state[1][1]=2;
    state[1][2]=0;
    state[2][0]=0;
    state[2][1]=3;
    state[2][2]=0;
    state[3][0]=-1;
    state[3][1]=0;
    state[3][2]=0;
    N=strlen(T);
    k=0;
    S=0;

    while(k<N && S!=-1)
    {
        if(T[k]=='a')
            I=0;
        else if(T[k]=='b')
            I=1;
        else
            I=2;
        S=automata(S,I);
        k=k+1;
    }

    if (S==-1)

        cout<<N-strlen(P);
}

    int automata(int S,int I)

    {
         return (state[S][I]);
     }

