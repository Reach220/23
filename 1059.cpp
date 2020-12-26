#include<iostream>
#include<algorithm>
using namespace std;
#define cir i=0;i<m;i++//骚操作
int s[1005],s1[1005],a[1005];
int main(){
    int m,i,cnt=0;
    cin>>m;
    for(cir){
        cin>>s[i];
    }//输入
    sort(s,s+m);//快排
    for(cir){
        if(s[i]!=s[i+1]){
            s1[cnt]=s[i];
            cnt++;
        }//去重，另开一个数组储存不重复的数字
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<s1[i]<<" ";
    }//
    return 0;
}