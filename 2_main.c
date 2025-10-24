//202510125208 
//1287560134@qq.com 
//周钰芹
#include <stdio.h>
void main()
{
    int chengji;
    scanf("%d",&chengji);
    if (chengji >=90 && chengji<=100){
        printf ("A");
    }else if (chengji >=80 && chengji<=90){
        printf("B");
    }else if(chengji >=70 && chengji<=80){
        printf("C");
    }else if(chengji >=60 && chengji<=70){
        printf("D");
    }else if (chengji <60){
        printf("E");
    }
}
