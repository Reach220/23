#include <stdio.h>
int main (){
    int i,m;
    scanf("%d",&m);
    for(i=2;i<=(m-1);i++)
        if(m%i==0) break;
    if(i>=m) {printf("yes\n");}
    else printf("no\n");
    return 0;
}