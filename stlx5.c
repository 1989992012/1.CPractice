/*************************************************************************
	> File Name: stlx5.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月20日 星期六 15时13分20秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, FOOLISH, FAIL, MEDIUM, GOOD;
    scanf("%d", &n);
    if (n == 0) printf("FOOLISH\n");
    else if (n < 60) {
        printf("FAIL\n");
    } else if (n < 75) {
        printf("MEDIUM\n");
    } else {
        printf("GOOD");
    }
    return 0;
}
