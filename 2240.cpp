//dp?
#include <cstdio>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;
double num;//答案，answer
struct node{//金币结构体
    int m,v;//第 i堆金币的总重量和总价值分别是 mi,vi 
    double price;//金币单位价格
}gold[105];//金币堆
int cmp(node a,node b){
    if(a.price>b.price) return 1;
    return 0;
}
int main(){
    int n,t;//n:金币堆数   t：背包容量
    int cnt=0;//计数器，表示背包被占容量
    scanf("%d%d",&n,&t);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&gold[i].m,&gold[i].v);
        gold[i].price=(double)gold[i].v/(double)gold[i].m;
    }
    sort(gold+1,gold+1+n,cmp);//按单价排序，从小到大
    for(int i=1;i<=n && cnt<=t;i++){//依次拿，直到背包无容量
        if(cnt+gold[i].m>t){//装不下整堆
            num+=(double)gold[i].price*(t-cnt);//能装多少就装
            break;
        }
        else{
            num+=(double)gold[i].v;//存入答案
            cnt+=gold[i].m;//已占用内存++
        }
    }
    printf("%.2lf",num);
    return 0;
}
/**阿里巴巴走进了装满宝藏的藏宝洞。藏宝洞里面有 N 堆金币，第 i堆金币的总重量和总价值分别是 mi,vi 
。阿里巴巴有一个承重量为 T的背包，但并不一定有办法将全部的金币都装进去。他想装走尽可能多价值的金币。
所有金币都可以随意分割，分割完的金币重量价值比（也就是单位价格）不变。请问阿里巴巴最多可以拿走多少价值的金币？
 */
 //一个实数表示答案，输出两位小数