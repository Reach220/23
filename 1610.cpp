#include <cstdio>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;
int cnt; //计灯器
int s[100005], b[100005];
void work(int s[],int b[] ,int dist, int n)
{
    int p, q;//设定两个变量来记录离i左边与右边最近的灯
    /*for (int i = 2; i <= n - 1; i++)
    {
        if (s[i + 1] - s[i - 1] <= dist)
        {
            cnt++;         //计灯器+1
            s[i] = s[i - 1]; //消除被熄灭的灯,当作不存在
        }
    }*/
    for (int i = 2; i <= n - 1; i++)
    { //第一盏和最后一盏灯必须亮着
        for (int j = i - 1; j >= 1; j--)
        { //灯未熄灭
            if (b[j] == 1)
            {
                p = j;
                break;
            }
        }
        for (int j = i + 1; j <= n; j++)
        { //灯未熄灭
            if (b[j] == 1)
            {
                q = j;
                break;
            }
        }
        if (s[q] - s[p] <= dist)
        {
            b[i] = 0; //熄灯
            cnt++;
        }
    }
}
int main()
{
    int n, dist;              //n与dist
    scanf("%d%d", &n, &dist); //输入
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &s[i]); //输入
        b[i] = 1;           //初始化判断数组，1为开灯
    }
    sort(s + 1, s + 1 + n); //灯排个序，从小到大
    //第一盏和最后一盏灯必须亮着
    work(s,b, dist, n); //工作区
    printf("%d", cnt);
    return 0;
}