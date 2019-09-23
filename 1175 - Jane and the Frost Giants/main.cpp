//#include<bits/stdc++.h>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <iostream>
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl;
#define ll long long
#define Toggle(n,i) ((1<<i)^n)
#define valid(x,y) (x>-1&&x<r&&y>-1&&y<c)
char s[205][205];
using namespace std;
int n,mm,r,c;
int dx[]={+1,-1,0,0};
int dy[]={0,0,+1,-1};
bool fire_vis[205][205];

bool escape(int x,int y)
{
    if(x==0 || y==0 || x==r-1 || y==c-1)
    {
        return true;
    }
    else
        return false;
}

vector<pair<int,int> > firing(vector<pair<int,int> >fire)
{
    vector<pair<int,int> >fire2;
    int Size=fire.size();
    for(int i=0;i<Size;++i)
    {
        pair<int,int>f=fire[i];
        for(int j=0;j<4;++j)
        {
            int x2=f.first+dx[j];
            int y2=f.second+dy[j];

            if(!fire_vis[x2][y2] && valid(x2, y2) && s[x2][y2] == '.')
            {
                s[x2][y2]='F';
                fire_vis[x2][y2]=true;
                fire2.emplace_back(x2,y2);
            }
        }
    }
    fire.clear();
    return fire2;
}

int bfs(int srcx,int srcy,vector<pair<int,int> >fire)
{
    if(escape(srcx,srcy))
    {
        return 1;
    }

    int level[205][205]={};
    memset(level,0,sizeof level);
    level[srcx][srcy]=1;
    queue<pair<int,int> >q;
    q.push({srcx,srcy});
    int fireLevel=2;
    while(!q.empty())
    {
        pair<int,int> u= q.front();
        q.pop();
            if(level[u.first][u.second]==fireLevel){
                fire=firing(fire);
                fireLevel++;
            }
        if(escape(u.first,u.second) && s[u.first][u.second]=='.')
        {
            //cout<<"found\n";
            //cout<<u.first<<" : "<<u.second<<endl;
            return level[u.first][u.second];
        }
        if(s[u.first][u.second]=='F')continue;
        pair<int,int> v;

        for(int i=0;i<4;++i)
        {
            int x2=u.first+dx[i];
            int y2=u.second+dy[i];


            if( valid(x2,y2) && s[x2][y2]=='.' && !level[x2][y2])
            {


                level[x2][y2]=level[u.first][u.second]+1;
                v.first=x2;
                v.second=y2;
                q.push(v);
            }
        }

        //cout<<"come here\n";



        int Size2=fire.size();
        /*
        cout<<Size2<<endl;
        for(int i=0;i<Size2;++i)
        {
            printf("%d %d\n",fire[i].first,fire[i].second);
        }
         */
    }
    return -1;
}
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int iii=1;iii<=t;++iii)
    {
        memset(fire_vis,false,sizeof fire_vis);
        scanf("%d%d",&r,&c);

        vector<pair<int,int> >fire;
        int srcx,srcy;


        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                scanf(" %c",&s[i][j]);
                if(s[i][j]=='F')
                {
                    fire_vis[i][j]=true;
                    fire.push_back({i,j});
                }
                else if(s[i][j]=='J')
                {
                    srcx=i;
                    srcy=j;
                    s[i][j]='.';
                }
            }
            s[i][c]='\0';
        }
       // for(int kk=0;kk<r;kk++) cout<<s[kk]<<endl;
        int res=bfs(srcx,srcy,fire);
        if(res==-1)
        {
            printf("Case %d: IMPOSSIBLE\n",iii);
        }
        else
        {
            printf("Case %d: %d\n",iii,res);
        }
    }
    return 0;
}
