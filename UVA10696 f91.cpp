#include<cstring>
#include<iostream>
#include<stdio.h>
using namespace std;
int f91(int n);
int main(){
    int n,num;;
    while(scanf("%d",&n) && n!=0){
       num=f91(n);
       printf("f91(%d) = %d\n",n,num);
    }
    return 0;
}
int f91(int n){
    if(n<=100)  return f91(f91(n+11));
    else return n-10;
}