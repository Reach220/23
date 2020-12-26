//n个人围成一圈，从第一个人开始报数,数到 mm 的人出列，再由下一个人重新从 11 开始报数，数到 mm 的人再出圈，依次类推，直到所有的人都出圈，请输出依次出圈人的编号。
#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;
int n,m;
int a[105];
int num,cnt=0,rear;//cnt计数器，记录数了几个人（数到m为止） rear计时器，记录到n
int main(){
    scanf("%d %d",&n,&m);
    int num=n;
    /*last=1;
    while(num){//到最后一个人为止
        int cnt=0;
        for(int i=last;cnt!=m;i++){
            if(i>n) i=1;//保证循环人数
            if(a[i]==-1) continue;//已经被踢出列
            ++cnt;
            if(cnt==m){//当前报数的正好报到m
                a[i]=-1;//标记踢出
                num--;//人数少一
                last=i+1;//记下次数的位置
                printf("%d ",i);//输出：这个人现在被踢出
                break;
            }
        }
    }*/
    //num为未被选出人数
    while(num){//选到没人为止
        rear++;//一个一个数
        if(rear>n) rear=1;//当rear大于n时，回到1
        if(a[rear]!=1) cnt++;//若未标记，cnt+1,数一个人
        if(cnt==m){//达到条件
            a[rear]=1;//标记
            num--;//减一
            cnt=0;//计数器归零，开始下一次
            printf("%d ",rear);
        }
    }
    return 0;
}
