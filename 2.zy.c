//202510125208
//1287560134@qq.com
//周钰芹
#include <stdio.h>
int main() {
    int n, i, is_prime = 1; 
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0; 
            printf("密钥安全，密码设置成功")
        }
    }

    if (n == 1) is_prime = 0;
    printf("密钥不安全，请重新输入");
    return 0;
}

