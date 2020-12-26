/*
你所在城市的街道好像一个棋盘，有a条南北方向的街道和b条东西方向的街道。南北方向的a条街道从西到东依次编号为l到a，而东西方向的b条街道从南到北依次编号为l到b，南北方向的街道i和东西方向的街道j的交点记为(i，j)。

你住在(1，1)处，而学校在(a，b)处，你骑自行车去上学，自行车只能沿着街道走，而且为了缩短时间只允许沿着向东(右)和北（上）的方向行驶。

现在有N个交叉路口在施工(X1，Yl)、(X2，Y2)……，(Xn，Yn)，这些路口是不能通车的。

问你上学一共有多少走法?
*/
//dfs
/*不能走到施工区域。
不能往下或左走。
不能越界。（考虑）
不能重复走。*/
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int a,b,n,ans;//表示有n个路口在维修,ans为方案数
int record[100][100];
void in(){
    scanf("%d%d%d",&a,&b,&n);
    //接下来n行，每行两个整数X_i，Y_i，描述路口的位置
    for(int i=1;i<=n;i++){ 
        int x,y;//维修坐标
        scanf("%d%d",&x,&y);
        record[x][y]=-1;//标记维修坐标
    }
}
void dfs(int x,int y){
     if(x<1||x>a||y<1||y>b)  return;//特判，不要越界（超重点）
    if(x==a && y==b){
        ans++;
        return;
    }
    else if(record[x][y]!=-1){
        dfs(x,y+1);//向上走
        dfs(x+1,y);//向右走
    }
}
void out(){
    printf("%d",ans);
}
int main(){
    in();
    dfs(1,1);
    out();
    return 0;
}