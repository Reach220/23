#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;
//a*pow(i,3)+b*pow(i,2)+c*i+d
double a,b,c,d;//ax^3+bx^2+cx^1+dx^0=0
double x1,x2,x3;//三个不同实根(根的范围在-100−100至100100之间,且根与根之差的绝对值≥1
//都用double 反正输出都是double
void in(){
    cin>>a>>b>>c>>d;
}
double fx(double i){
   return (a*pow(i,3)+b*pow(i,2)+c*i+d);
}
int main(){
    in();
    double begin,end,mid;
    //试一下二分，速度快总是好的
    double i;
    for(i=-100;i<=100;i++){
        if(fx(i)==0) printf("%.2lf ",i);
        else if((fx(i)*fx(i+1))<0) {//二分
            begin=i,end=i+1;
            while((end-begin)>=0.001){//保留两位小数，所以区间两端差值小于0.001时，即为零点
            //也就是说在有序数组中找到“正好大于（小于）目标数”的那个数
            mid=(begin+end)*0.5;//取中间
            if(fx(begin)*fx(mid)<0) end=mid-1;
            else begin=mid;//保留下界
            } 
            printf("%.2lf ",begin);
        } 
    }
    /*while(begin<=end){
        mid=(begin+end)/2;
        
    }*/
    return 0; 
}
/*
   枚举根的值域中的每一个整数x(-100≤x≤100)。由于根与根之差的绝对值≥1，因此设定搜索区间[x1，x2]，其中x1=x，x2=x+1。若
   ⑴f(x1)=0，则确定x1为f(x)的根；
   ⑵f(x1)*f(x2)>0，则确定根x不在区间[x1，x2]内，设定[x2，x2+1]为下一个搜索区间
   ⑶f(x1)*f(x2)<0，则确定根x在区间[x1，x2]内。
   如果确定根x在区间[x1，x2]内的话（f(x1)*f(x2)<0），如何在该区间找到根的确切位置。采用二分法，将区间[x1，x2]分成左右两个子区间：左子区间[x1，x]和右子区间[x，x2]（其中x=mid）： 
   如果f(x1)*f(x)≤0，则确定根在左区间[x1，x]内，将x设为该区间的右指针（x2=x），继续对左区间进行对分；如果f(x1)*f(x)>0，则确定根在右区间[x，x2]内，将x设为该区间的左指针（x1=x），继续对右区间进行对分；
  上述对分过程一直进行到区间的间距满足精度要求为止（x2-x1<0.001）。此时确定x1为f(x)的根。
  */