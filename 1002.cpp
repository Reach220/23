#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
ll f[22][22],map[23][23];//B标记有无🐎盯着 /路线数数组
void mark(ll x,ll y)//标记马的控制点
{
    map[x][y]=1;
    if(x>=1 && y>=2) map[x-1][y-2]=1;
    if(x>=2 && y>=1) map[x-2][y-1]=1;
    if(x>=2)map[x-2][y+1]=1;
    if(x>=1)map[x-1][y+2]=1;
    if(y>=2)map[x+1][y-2]=1;
    if(y>=1)map[x+2][y-1]=1;
    map[x+2][y+1]=1;
    map[x+1][y+2]=1;
}
int main(){
    ll xb,yb,xc,yc;
    scanf("%lld%lld%lld%lld",&xb,&yb,&xc,&yc);
    mark(xc,yc);
    f[0][0]=1;
    //把每一个格子都用上方格子+左边格子的公式算出来，被马控制则为0
    for(int i=0;i<=xb;i++){
        for(int j=0;j<=yb;j++){
            if(map[i][j]!=1){
                if(i>0 && map[i-1][j]==0) f[i][j]+=f[i-1][j];//为0时，特判
				if(j>0 && map[i][j-1]==0) f[i][j]+=f[i][j-1];
            }
        }
    }
    printf("%lld",f[xb][yb]);//整体向右下挪一下
    return 0;
}