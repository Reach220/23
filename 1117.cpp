#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;
int a[10000005];


int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
        //输入
        //将给定的 NN 个数从小到大输出
        sort(a+1,a+n+1);//取最左边的为基准
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}