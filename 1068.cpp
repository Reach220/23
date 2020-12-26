#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m,line,people;//n表示报名参加笔试的选手总数，m表示计划录取的志愿者人数,line为分数线
struct node {
    int id;
    int score;
}c[5050];
void init(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d%d",&c[i].id,&c[i].score);
    }
}
bool compare(node a,node b){
    if(a.score>b.score) return true;//比成绩。大到小；
    else if(a.score==b.score){
        if(a.id<b.id) return true;/*成绩相同，比名号，小到大；*/
        else return 0;
    }
    else return 0;
}/*比较函数，用于sort快排，return true则排在前面；*/
void work(){
        sort(c,c+n,compare);
        m=m*1.5;
        line=c[m-1].score;
        people=m;
        for(int i=m;i<n;i++){
            if(c[i].score==line) people++;//有成绩为录取线，人数加一
            else if(c[i].score<line) break;//当有小与分数线时 ，跳出
        }//加上同等分数线，仔细啊~
    }
void out(){
        printf("%d %d\n",line,people);
        for(int i=0;i<people;i++) printf("%d %d\n",c[i].id,c[i].score);
    }
int main(){
   init();
   work();
   out();
   return 0;
}