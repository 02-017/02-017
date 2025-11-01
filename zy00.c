#include <stdio.h>
int main(){
    int num,d1,d2,d3;
    int count=0;
    for (num=100;num<999;num++){
        d1=num/100;
        d2=(num/10)%10;
        d3=num % 10;
        if(d1*d1*d1+d2*d2*d2+d3*d3*d3==num){
            if (count=0){
                printf("%d",num);
            }else{
                printf("%d",num);

            }count++;
        }
    } 
    return 0;



}