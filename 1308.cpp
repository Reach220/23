#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string word;
    string article;
    getline(cin, word);
    getline(cin, article);
    //根据题意，全部大小写转化
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] <= 'Z' || word[1] >= 'A')
            word[i] = word[i] + 32;
    }
    for (int i = 0; i < article.size(); i++)
    {
        if (article[i] <= 'Z' || article[1] >= 'A')
            article[i] = article[i] + 32;
    }
    int isprime = 0, sum = 0;
    int i, j;
    for (i = 0; i < article.size(); i++)
    {
        if (word[0] == article[i])
        {
            for (j = 0; j < word.size(); j++)
            {
                if(word[j]!=article[i+j]) break;
            }
            if(j==word.length() && article[i+j]==' ' && article[i-1]==' ')
            {
                sum++;
                if(sum==1) isprime=i;
            }
        }
    }
    if(isprime!=0) printf("%d %d",sum,isprime);
    else printf("-1");
    return 0;
}