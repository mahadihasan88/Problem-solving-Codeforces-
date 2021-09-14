#include<stdio.h>


int main()
{
    int count=0,x=0,n;
    scanf("%d",&n);
    char st[60];
    getchar();
    for(int j=0; j<n; j++)
        scanf("%c",&st[j]);

    x=strlen(st);
    for(int i=0; i<x-1; i++)
    {
        if(st[i]==st[i+1])
            count++;
    }
    printf("%d\n",count);
    return 0;
}

