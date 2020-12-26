#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,k,m,x;
struct people{
    int left,right;//左手，右手
    int isprime;//判断是否输出
}people[100005]={0};
int p;//p为1时，右边；p为0时，左边
void add(int k,int i,int p){//插人进去
    if(p){//插到右边
    people[i].right=people[k].right;//插入的人右手牵原来k牵的人
    people[i].left=k;//插入的人左手牵k
    people[k].right=i;//k右手牵i
    people[people[i].right].left=i;//原来k左边的人的左手现在牵i
    }
    else{//插到左边
    people[i].left=people[k].left;//插入的人i的左手牵原来k左边的人
    people[i].right=k;//插入的人i右手牵k
    people[k].left=i;//k的左手牵插入的人i
    people[people[i].left].right=i;//原来k的右边的人右手牵i
    }
}
int main(){
    scanf("%d",&n);
    people[0].left=0,people[0].right=0;//假设有一个0同学，左右手都只能自己牵自己
    add(0,1,1);//让，0，1两位同学你牵我，我牵你
    for(int i=2;i<=n;i++) {//循环，输入
        scanf("%d%d",&k,&p);
        add(k,i,p);
    }
    scanf("%d",&m);
    while(m--){
        scanf("%d",&x);
        people[x].isprime=1;//根据题目标记
    }
    for(int i=people[0].right;i>0;i=people[i].right){//从0的右手牵的同学开始输出，再到0结束
        if(people[i].isprime==0){//未被标记
        printf("%d ",i);
        }
    }
    return 0;
}
