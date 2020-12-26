//
// Created by king23 on 2020/12/15.
//
//01背包？   大概
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
int v,n;//v:箱子容量 n:物品数量
int ans=5555;//*忘记初始化了  惨惨
using namespace std;
int vum[50];//物品体积数
int f[50];//f为每个点的最小
// //f[i]=min(f[i-1]-vum[i],f[i-1])
void search(int v,int i){//v:背包剩余容量，i:搜索到第几个物品了
    if(i>n){//找完了
        ans=min(ans,v);//更新最小答案
        return;//返回，进行下一轮寻找
    }
    if(v>=vum[i]) search(v-vum[i],i+1);//剩余容量可以装下，那么放入第i件物品
    search(v,i+1);//装不下，那么不放，并进行下一个
}

int main() {
    scanf("%d%d",&v,&n);//输入v,n
    for(int i=1;i<=n;i++){
        scanf("%d",&vum[i]);
    }
    //输入
    search(v,1);//开始
    cout<<ans<<endl;
    return 0;
}



//!用搜索去做



/*
  有一个箱子容量为V，同时有n个物品,每个物品有一个体积（正整数）。
要求n个物品中，任取若干个装入箱内，使箱子的剩余空间为最小。
 */
/*
24
6
8
3
12
7
9
7
*/