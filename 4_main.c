//202510125208 
//1287560134@qq.com 
//周钰芹
#include <stdio.h>
int main()
{
  printf("请输入三个整数\n");
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if (a+b<=c||a+c<=b||b+c<=a){
    printf("不能组成三角形");
  }else{
    printf("可以组成三角形");
   }
return 0;
}
