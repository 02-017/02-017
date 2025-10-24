//202510125208 
//1287560134@qq.com 
//周钰芹
#include <stdio.h>
int main ()
{
    int a,b,c;
    char x;
    scanf("%d %d %c",&a,&b,&x);
    if(x=='+'){
        c=a+b;
    printf("%d+%d=%d\n",a,b,a+b);
    }else if (x=='-'){
        c=a-b;
    printf("%d-%d=%d\n",a,b,a-b);
    }else if (x=='*'){
        c=a*b;
        printf("%d*%d=%d\n",a,b,a*b);
    }else if (x=='/'){
        c=a/b;
    printf("%d/%d=%d\n",a,b,a/b);
    }
    return 0;
}
