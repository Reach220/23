#include<iostream>
#include<cstring>
#include<algorithm>
#include <cstdio>
using namespace std;
struct node
{
    string ticket; //装票数
    int num;  //装号数
    int lenticket; //装票数的位数
}s[25];
bool cmp(node a,node b)
{
    if(a.lenticket>b.lenticket) return 1; //前一个比后一个位数多，不交换
    if(a.lenticket==b.lenticket&&a.ticket>b.ticket) return 1; //位数相同，但前一个按字典序排列比后一个大，也不交换。
    return 0; //剩下情况均要交换。
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].ticket;
        s[i].num=i; //存号数
        s[i].lenticket=s[i].ticket.size(); //存票数的位数
    }
    sort(s+1,s+n+1,cmp); //排序
    printf("%d\n",s[1].num);
    cout<<s[1].ticket;
    return 0;
}
/*
5
98765
12365
87954
1022356
985678
*/