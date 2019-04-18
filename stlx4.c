/*************************************************************************
	> File Name: stlx4.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月18日 星期四 19时13分25秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf", PI / 180.0 * x);
    return 0;
}
