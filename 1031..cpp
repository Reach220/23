#include <cstdio>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;
/*
在编号为1堆上取的纸牌，
只能移到编号为2的堆上；
在编号为N的堆上取的纸牌，
只能移到编号为N−1的堆上；
其他堆上取的纸牌，
可以移到相邻左边或右边的堆上。
*/
//现在要求找出一种移动方法，
//用最少的移动次数使每堆上纸牌数都一样多
int number[105];
int moves[105];//记录数组
int cnt=0;
int main(){
    int n;
    int sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&number[i]);//每堆纸牌初始数
        sum+=number[i];//计算出总牌数
    }//输入
    int joker=sum/n;//纸牌数一样多时，没堆纸牌数
    //用joker表示，因为纸牌数为n的倍数，所以整除
    for(int i=1;i<=n;i++){
        moves[i]=joker-number[i];//记录每堆卡牌与joker差
        }
        //先只看第一堆，处理第一堆后，再处理第二堆，此时第二堆情况与第一堆情况类似
        //都只让卡牌从后一堆往前一堆移动
    for(int i=1;i<=n;i++){
        if(moves[i]!=0){
        moves[i+1]+=moves[i];
        cnt++;//当需要移动时，计数器+1
    }
    }
    printf("%d",cnt);
    return 0;
}
/*
4
9 8 17 6
*/
