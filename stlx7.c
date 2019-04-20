/*************************************************************************
	> File Name: stlx7.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月20日 星期六 16时47分07秒
 ************************************************************************/

#include <stdio.h>

int main() {
    /*int n = 1;
    while (n <= 100) {
        printf("%d\n", n);
        ++n;
    }*/
    int n, t = 0;
    scanf("%d", &n);
    while (n != 0) {
        n /= 10;
        t++;
    }
    printf("%d\n", t);
    return 0;
}
