#include<stdio.h> 
int n,cnt=0,num1[10]={6,2,5,5,4,5,6,3,7,6};
int num[2500]={6};//假设最大的数为1000（1000用了20根，加号等号十根，等于24，所以加数一定小于1000）
//特判0
void in(){
    scanf("%d",&n);//  0/0==0，所以从1开始
    for(int i=1;i<=2000;i++){ 
        int j=i;
        while(j>=1){ 
           num[i]+=num1[j%10];
           j/=10;
       }//记录每一个数字所用火柴棍
    }
}
void work(){
    n-=4;//减去等号与加号所用火柴棍
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            if(num[i]+num[j]+num[i+j]==n) cnt++;
        }
    }
}
void out(){
    printf("%d",cnt);
}
int main(){
    in();
    work();
    out();
    return 0;
}