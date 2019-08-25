#include <stdio.h>

int x = 3;
int y = 3;

// 不清楚最初它是否执行过了？
// 貌似没有变量提升这东西，如果把addTwoNum写在main下面，就会报错  implicit declaration
int addTwoNum()
{
    int x;  // 声明了x，并且定义了它
    extern int y;  // 仅仅声明y的存在，但是定义表明要去从别的地方寻找它 (从哪开始寻找？)
    printf("here y is: %d", y);  // 3 --> why？y竟然不是4？
    printf("\n");
    x = 1;
    y = 2;
    return x + y;
}

int main()
{
    int y = 4;
    int result;
    result = addTwoNum();
    printf("get result: %d", result);  // 3
    printf("\n");  // 貌似prinrf只接收两个参数
    printf("get global x: %d", x);  // 3
    printf("\n");
    printf("get inner y: %d", y);  // 4
    printf("\n");  // 如果末尾不printf一下 \n，那么就会最后有一个%在最后
    return 0;
}