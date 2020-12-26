/*
对于给定的一个长度为N的正整数数列A_i现要将其分成连续的若干段，并且每段和不超过M（可以等于M），问最少能将其分成多少段使得满足要求。
*/
#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int s[1000005];
int cnt;//计段器
void work(int s[],int sum,int len){
    int num=0;
    for(int i=1;i<=len;i++){
        num+=s[i];
        if(num>sum){
            num=0;
            cnt++;
            i--;
        }
    }
}
int main(){
    int len,sum;//长度，某和
    scanf("%d%d",&len,&sum);//输入长度，与某和
    for(int i=1;i<=len;i++){
        scanf("%d",&s[i]);//输入数列
    }
    work(s,sum,len);
    printf("%d",cnt+1);
    return 0;
}