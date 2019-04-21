/*************************************************************************
	> File Name: 二分查找.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月21日 星期日 15时16分17秒
 ************************************************************************/

#include <stdio.h>


int binary_search(int *num, int n, int val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num[mid] == val) return mid;
        if (num[mid] < val) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int arr[1000];

int main() {
    int n, m, a[1000];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", binary_search(a, n, m));
    return 0;
}
