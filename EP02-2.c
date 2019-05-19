/*************************************************************************
	> File Name: EP02-1.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年05月19日 星期日 18时14分40秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define MAX_M 4000000

int main(){
    long long sum = 0;
    int a = 0, b = 1;
    while (a + b < MAX_M) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%lld\n", sum);
    return 0;
}
