#include <cstdio>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std; 
//可以有多个人同时呆在同一个位置。
//0或L+1的位置，离开了独木桥
//匀速
//如果两个士兵面对面相遇，他们无法彼此通过对方
//于是就分别转身，继续行走。转身不需要任何的时间。
//你连每个士兵初始面对的方向都不知道
int number[5005];//数组储存士兵初始位置
int main(){
    int l,n;//l:独木桥长度    n:士兵数目
    int timeminn=0,timemaxn=0;//撤离时间
    //分别表示部队撤离独木桥的最小时间和最大时间。
    scanf("%d%d",&l,&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&number[i]);
    }//输入
    if(n==0){
        printf("0 0");
        return 0;
    }//特判
    //相互碰撞时，掉头，等于他们穿过了对方，所以只算士兵向左与向右的最大与最小时间（重点）
    for(int i=1;i<=n;i++){
        int left,right;//向左与向右
        int ma,mi;//暂存大小
        left=number[i];
        right=l+1-number[i];
        //找大小
        if(left>=right){ 
            ma=left;
            mi=right;
        }
        else{
             mi=left;
             ma=right;
        }
        if(ma>=timemaxn) timemaxn=ma;
        if(mi>=timeminn) timeminn=mi;
    }
    printf("%d %d",timeminn,timemaxn);
    return 0;
}
//初始时，没有两个士兵同在一个坐标。
/*
4
2
1 3
*/
//2 4
