//
// Created by king23 on 2020/12/14.
//
#include <iostream>
#include <cstdio>
//给出一个长度为n的序列a，选出其中连续且非空的一段使得这段和最大。
using namespace std;
int a[200005];//数列a
int f[200005];//记录数组  子段和
//f[i]f[i]为结尾在第ii个格子的最优解
int ans=-6666666;
void in(int *n){//输入
    scanf("%d",n);
    for(int i=1;i<=*n;i++){
        scanf("%d", &a[i]);
        f[i]=1;
    }
}

void maxx(const int *n){
    for(int i=1;i<=*n;i++){
        f[i]=max(a[i],a[i]+f[i-1]);
        ans=max(ans,f[i]);
    }
    printf("%d",ans);
}
//f[i]=max(f[i-1]+a[i],a[i])
int main(){
    int n=0;
    in(&n);
    maxx(&n);
    return 0;
}
