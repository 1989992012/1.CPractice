/*************************************************************************
	> File Name: Euler5.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月21日 星期日 17时03分39秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    srand(time(0));
    int n = 0, m = 0;
    #define MAX_N 10000000
    for (int i = 0; i < MAX_N; i++) {
        double x = 1.0 * (rand() % MAX_N) / MAX_N;
        double y = 1.0 * (rand() % MAX_N) / MAX_N;
        n += 1;
        m += ((x * x + y * y) <= 1.0);
    }
    printf("%lf\n", 4.0 * m / n);
    return 0;
}
