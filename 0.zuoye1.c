/*************************************************************************
	> File Name: 0.zuoye1.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月22日 星期一 19时38分07秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d", &k);
    for (int i = 0; i < k; ++i) {
        scanf("%d%d", &n, &m);
        if(n < m) {
            int t = n;
            n = m;
            m = t;
        }
        int f = 1;
        while (n / m == 1 && n % m != 0) {
            int t = n % m;
            n = m;
            m = t;
            f = 0 - f;

        }
        if (f == 1) printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
    return 0;
}
