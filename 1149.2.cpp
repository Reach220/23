#include<iostream>
using namespace std;
int num[10]={6,2,5,5,4,5,6,3,7,6};//定义个辅助数组记录每个数字所需的火柴数
int matches(int m){    //一个用来计算一个数需多少个火柴棒的函数
         int i,k=0;       //K是火柴棒的数量
         for(i=m;i!=0;i/=10) k+=num[i%10];    //将这个数字每一位的火柴棒的数量都计算出来
         if(m==0) k+=num[0];      //有一种特殊情况：数字为0此时不会执行上述程序，所以加一个
         return k;
}
int main(){
    int i,j,all=0,n;    //all是符合条件的算式总数
    cin>>n;     
        for(i=0;i<=1000;i++)
            for(j=0;j<=1000;j++)
                if(matches(i)+matches(j)+matches(i+j)+4==n) all++;    //如果这个算式加起来的火柴棒总数刚好用完所有火柴棒就把数量往上加
        cout<<all;
        return 0;
}