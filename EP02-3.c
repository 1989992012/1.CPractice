/*************************************************************************
	> File Name: EP02-3.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年05月19日 星期日 18时42分31秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_M 4000000

int main() {
    long long sum = 0;
    int f[3] = {0, 1};
    int n = 1;
    while (f[n % 3] + f[(n - 1) % 3] < MAX_M) {
        n += 1;
        f[n % 3] = f[(n - 1) % 3] + f[(n - 2) % 3];
        if (!(f[n % 3] & 1)) sum += f[n % 3];
    }
    printf("%lld\n", sum);
    return 0;
}
