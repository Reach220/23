  #include <iostream>
  #include <cstring>
  #include<stdio.h>
  using namespace std ;
  
  char a[105] , b[105] ;
  int ans = 1 , num = 1 ; //这里要注意起始值必须为1，要是0的话所有的数乘出来都是0
  main(){
       scanf("%s%s",a,b); // 输入
      for( int i = 0 ; i <strlen(a) ; i ++ ) ans *= a[i] - 'A'+1 ; 
      // @的编号为64 ，A的编号65-@的编号64就是所对应的英语字母序号
      for( int i = 0 ; i < strlen(b) ; i ++ ) num *= b[i] - 'A'+1 ; 
      // 同上
      ans %= 47 , num %= 47 ; // 根据题意，mod 47
      if( ans == num ) printf("GO") ; 
      else printf("STAY") ; //输出
      return 0 ;
  }
 // 其中A是11，Z是2626