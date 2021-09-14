#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[1021];
    gets(st);
    if(st[0]>='a'&&st[0]<='z')
        st[0]=st[0]-32;
    puts(st);
    return 0;
}
