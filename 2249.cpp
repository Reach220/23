#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;
int n,m;
int num[1000005];
int ser[1000005];//搜索数组，存要搜索的数字
void in(){//输入
    scanf("%d%d",&n,&m);
    //输入数列单调不减
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);//输入待查询的数字，单调不减；
    }
    for(int i=1;i<=m;i++){
        scanf("%d",&ser[i]);
    }
}
//重写二分
/*int binary(int x) //二分查找 
{
	int l=1,r=n;
	while (l<r)
	{
		int mid=l+(r-l)/2;
		if (num[mid]>=x) r=mid;
		else l=mid+1;
	}
	if (num[l]==x) return l; //找都了就输出他的位置 
	else return -1; // 没找到输出-1 
}*/
int binary(int x){
    int l=1,r=n;//设置二分范围
    int mid;
    //第一次出现的编号   **第一次**
    while(l<r){
        mid=l+(r-l)/2;
        if(num[mid]>=x) r=mid;
        else if(num[mid]<x) l=mid+1;
    }
    if (num[l]==x) return l; //找都了就输出他的位置 
	else return -1; // 没找到输出-1
} 
void work(){
    int ans;
    for(int i=1;i<=m;i++){
        ans=binary(ser[i]);//二分查找到位置
        printf("%d ",ans);
    }
}
int main(){
    in();
    work();
    return 0;
}
/*
11 3
1 3 3 3 5 7 9 11 13 15 1 5
1 3 6
*/