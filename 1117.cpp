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
        //����
        //�������� NN ������С�������
        sort(a+1,a+n+1);//ȡ����ߵ�Ϊ��׼
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}