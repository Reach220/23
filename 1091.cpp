//
// Created by king23 on 2020/12/16.
//
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
 int t[1000];
 int len_left[1000],len_right[1000];//�����������������½�����
 int ans;
/////////ans=max{n-len_left[i]-len_right[i]+1}   ���ϱ��ظ���ȥ���м����ֵ
 int main(){
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         scanf("%d",&t[i]);
         len_left[i]=1,len_right[i]=1;///��ʼ�����µ�������������һ����
     }
     for(int i=1;i<=n;i++) {
         for (int j = 1; j < i; j++) {
             if (t[i] > t[j]) len_left[i] = max(len_left[i], len_left[j] + 1);
             //���iλ�õ�ֵ����jλ�õģ����ǿ�����Ϊ����������
             //�Ƚϲ�ȡiλ�ú�ȡiλ���ĸ����µ��˶�
         }
     }
     for(int i=n;i>=1;i--){
         for(int j=n;j>i;j--){
             if(t[i]>t[j]) len_right[i]=max(len_right[i],len_right[j]+1);//�Ƚϲ�ȡiλ�ú�ȡiλ���ĸ����µ��˶�
             //������Ϊ�½�
         }
     }
     for(int i=1;i<=n;i++){
         ans=max(ans,(len_left[i]+len_right[i]-1));
     }
     cout<<n-ans<<endl;
     return 0;
 }
