#include<stdio.h>
int main()
{
    int N,I,M;
    char X[6000];
    scanf("%d",&N);

    for(I=1;I<=N;I++)
    {
        scanf("%s",&X);

    int l=strlen(X);

    if(l>10){
         printf("%c",X[0]);
         printf("%d",l-2);
         printf("%c",X[l-1]);
    }
    else
        printf("%s\n",X);
    return 0;
    }
}
