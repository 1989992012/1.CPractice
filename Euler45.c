/*************************************************************************
	> File Name: Euler45.c
	> Author: liuyan
    > Mai:l:1989992012@qq.com
	> Created Time: 2019年04月21日 星期日 14时40分09秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t Pentagonal(int n) {
    return n * (3 * n - 1) / 2;
}

int64_t Hexagonal(int n) {
    return n * (2 * n - 1);
}
typedef int64_t (*func)(int);//func变成类型
int binary_search(int64_t (*num)(int), int n, int64_t val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num(mid) == val) return mid;
        if (num(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

//int arr[1000];

int main() {
    //int n, m, a[1000];
    //scanf("%d%d", &n, &m);
    //for (int i = 0; i < n; i++) {
        //scanf("%d", &a[i]);
    //}
    //printf("%d", binary_search(a, n, m));
    int n = 166;
    while (binary_search(Hexagonal, n, Pentagonal(n)) == -1) ++n;
    printf("%" PRId64 "\n", Pentagonal(n));
    return 0;
}

