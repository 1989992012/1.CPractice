/*************************************************************************
	> File Name: 5.printf.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月30日 星期二 18时10分24秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>
#include <math.h>
//#define printf(frm, args...) ;

int output_dnum(int x, int digit) {
    int temp = 0, digit2 = 0;
    int flag = (x >= 0 ? 0 : (x = -x, 1));
    if (flag) {
        putchar('-');
    }
    do {
        temp =  temp * 10 + x % 10;//等价于((temp << 3) + (temp << 1)) + x % 10;
        digit2 += 1;
        x /= 10;
    } while(x);
    if (digit != -1) digit2 = digit;
    digit = 0;
    while (digit2--) {
        putchar(temp % 10 ^ 48);
        digit += 1;
        temp /= 10;
    }
    return digit;
}

int output_d(int x) {
    #define BASE 100000
    #define BASE_D 5
    int ret = 0;
    unsigned int temp = (x >= 0 ? x : -x);
    int digit = floor(log10(temp)) + 1;
    int p1 = x / BASE, p2 = x % BASE;
    if (digit <= 5) {
        output_dnum(p2, -1);
    } else {
        output_dnum(p1, -1);
        if (p2 < 0) p2 = -p2;
        output_dnum(p2, BASE_D);
    }
    #undef BASE
    return ret;
}

int my_printf(const char *str, ...) {
    va_list args;
    va_start(args, str);
//    while (x) {
//        putchar(x % 10 ^ 48);
//        x /= 10;
//    }
    int ret = 0;
    while (str[0]) {
        switch (str[0]) {
            case '%': {
                str++;
                switch (str[0]) {
                    case 'd': {
                        int x = va_arg(args, int);
                        ret += output_d(x);
                    } break;
                }
            } break;
            default: putchar(str[0]), ret++; break;
        }
//        putchar(str[0]), ret++;
        str++;
    }
    return ret;
}

int main() {
    my_printf("hello world : %d\n", -5);
    printf("hello world : %d\n", -5); 
    my_printf("hello world : %d\n", 10000);
    printf("hello world : %d\n", 10000);    
    my_printf("hello world : %d\n", 0);
    printf("hello world : %d\n", 0);    
    my_printf("hello world : %d\n", INT32_MIN);
    printf("hello world : %d\n", INT32_MIN);    
    my_printf("hello world : %d\n", 19999999); 
    printf("hello world : %d\n", 19999999);    
    int n;
    scanf("%d", &n);
    my_printf(" has %d digits\n", my_printf("%d", n));
    printf(" has %d digits\n", printf("%d", n));
    return 0;
}
//输出不了负数， 和以零结尾的，数字越界
