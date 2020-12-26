#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;
//“你应该可以让采到的草药的总价值最大。”
struct node{
    /* data */
    int time;
    int value;
}s[101];
//分别表示采摘某株草药的时间和这株草药的价值
int f[100000];
int main(){
    //T代表总共能够用来采药的时间，M代表山洞里的草药的数目。
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++) cin>>s[i].time>>s[i].value;
    //输入
    for(int  i=1;i<=m;i++){
        ////for(int j=1;j>=t;j++)
        for(int j=t;j>=s[i].time;j--){//放的下
            if(f[j]<f[j-s[i].time]+s[i].value) f[j]=f[j-s[i].time]+s[i].value;
        }
    }
    cout<<f[t];
    return 0;
}