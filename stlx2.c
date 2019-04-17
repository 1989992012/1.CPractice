/*************************************************************************
	> File Name: stlx2.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月17日 星期三 19时30分59秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    char str[100];
    scanf("%[^\n]", str);
    n = printf("%s", str);
    printf(" has %d digits\n", n);
    return 0;
}
