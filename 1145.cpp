#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
    int k,m;//k:k个好人，k个坏人    m：为数的人  n：总人数
    //找一个最小的m
    scanf("%d",&k);
    int flag=1;//flag判定
    m=k;
    //现在有一圈人，k个好人站在一起，k个坏人站在一起。从第一个好人开始数数
   while(flag){
       m++;
       int cnt=0;//杀的人的初始位置
       for(int j=0;;j++){//j为已经被杀人数
           cnt=(cnt+m-1)%(2*k-j);
           if(cnt<k) break;//判断出列的那个人是否小于k，小于就杀了好人，重新选择m
           if(j==k-1){
               flag=0;
               break;//人杀够了
           }
       }
   } 
   printf("%d",m);
   return 0;
}