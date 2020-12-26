#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
ll f[22][22],map[23][23];//B标记有无🐎盯着 /路线数数组
void mark(ll x,ll y)//标记马的控制点
{
    map[x][y]=1;
    map[x-1][y-2]=1;
    map[x-2][y-1]=1;
    map[x-2][y+1]=1;
    map[x-1][y+2]=1;
    map[x+1][y-2]=1;
    map[x+2][y-1]=1;
    map[x+2][y+1]=1;
    map[x+1][y+2]=1;
}
int main(){
    ll xb,yb,xc,yc;
    scanf("%lld%lld%lld%lld",&xb,&yb,&xc,&yc);
    mark(xc,yc);
    //把每一个格子都用上方格子+左边格子的公式算出来，被马控制则为0
    f[1][0]=1;//整体+1， 位移到图上的（0，0）需要一步
    //与f[0][1]一个效果
    for(int i=1;i<=xb+1;i++){
        for(int j=1;j<=yb+1;j++){
            f[i][j]=f[i-1][j]+f[i][j-1];//一个点的路径来自左方与上方
            //因为整体移动了——>
            if(map[i-1][j-1]) f[i][j]=0;//如果被马控制那么是0
        }
    }
    printf("%lld",f[xb+1][yb+1]);//整体向右下挪一下
    return 0;
}