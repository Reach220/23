#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
string in,out;
int main(){
    int len2;;/*
    while(cin>>in>>out){
        for(int i=0;i<len2;i++){
            if(in[i]==out[i]) l++;
        }
        if(l==len1) printf("YES\n");
        else printf("NO\n");
    }*/
    while(cin>>in>>out){
        len2=out.size();
        int i=0,j=0;
        for(j=0,i=0;j<len2;j++){
            if(in[i]==out[j]) i++;
        }
        if(in[i]== '\0') printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}