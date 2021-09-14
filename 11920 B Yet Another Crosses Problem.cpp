#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m,row=0,clm=0,ans=0;
        cin>>n>>m;
        char st[n+10][m+10];

        for(int i=0; i<n; i++)
        {
            int  cnt=0;
            for(int j=0; j<m; j++)
            {
                cin>>st[i][j];
                if(st[i][j]=='*')
                    cnt++;
            }
            if(row<cnt)
            {
                row=cnt;
               // r1=i;
            }
        }

        vector<int > r,c;

        for(int i=0; i<n; i++)
        {
            int  cnt=0;
            for(int j=0; j<m; j++)
            {
                if(st[i][j]=='*')
                    cnt++;
            }
            if(row==cnt)
            {
                r.push_back(i);
            }
        }


        for(int i=0; i<m; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(st[j][i]=='*')
                    cnt++;
            }

            if(clm<cnt)
            {
                clm=cnt;
                //c1=i;
            }
        }
        for(int i=0; i<m; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(st[j][i]=='*')
                    cnt++;
            }

            if(clm==cnt)
            {
                c.push_back(i);
            }
        }
       ans=n-row+m-clm;
        bool flag=false;
        for(int i=0; i<r.size(); i++)
        {
            for(int j=0; j<c.size(); j++)
            {
                if(st[r[i]][c[j]]=='.')
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
                ans--;
            break;
        }
        cout<<ans<<endl;
    }
    return 0;

}

