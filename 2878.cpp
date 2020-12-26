//现在要求以一种最棒的方法来尽可能的减少花儿的损失数量，求奶牛吃掉花儿的最少朵数！
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
struct node{
    int d;
    int t;//距离牛圈T分钟处吃花儿,每分钟会吃掉D朵卡哇伊的花
}cow[100005];
int cmp(node a,node b){
    if(a.t*b.d<b.t*a.d) return 1;
    //如果后送b牛损失的花少于后送a牛损失的花
//即a.t*a.d+(a.t+b.t)*b.d<=b.t*b.d+(a.t+b.t)*a.d化简
    return 0;
}
int main(){
    long long sum=0;
    long long loss=0;//loss:已经损失的
    int n;//奶牛数
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&cow[i].t,&cow[i].d);//输入
    }
    sort(cow+1,cow+1+n,cmp);//排序,按照损失大小排序,大到小（先牵大的）
    //贪心基本都要排序
    for(int i=1;i<=n;i++){
        sum+=cow[i].d;//不牵奶牛时，每秒钟损失
    }
     for(int i=1;i<=n;i++){
         sum-=cow[i].d;
         loss+=sum*cow[i].t*2;
     }
     printf("%lld",loss);
     return 0;
}