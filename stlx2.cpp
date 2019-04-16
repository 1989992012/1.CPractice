/*************************************************************************
	> File Name: stlx2.cpp
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月16日 星期二 20时45分34秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
    char str[100];
    scanf("%[^\n]s", str);
    int ret = printf("%s", str);
    printf(" has %d digits\n", ret);
    scanf("%[^\n]s", str);
    ret = printf("%s", str);
    printf(" has %d digits\n", ret);
    return 0;
}
