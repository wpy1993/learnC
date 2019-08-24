# C 知识记录

## 关键字

- 逻辑相关
break continue goto return
do for while
double float
if else switch case default
sizeof （类似typeof, 用法eg `sizeof(int/xx)`）


- 声明相关
int long
void auto
char const enum
register 声明 寄存器变量
short 声明 **短整型**的变量/函数
signed unsigned 声明 **有符号的类型**的变量/函数
static 声明 静态变量
struct 声明 结构体类型
typedef 给数据类型起`别名`
extern 声明 变量/函数 在**其他文件/本文件其他位置**的定义
union 声明 共用体类型
volatile 说明变量在程序执行中可以**被隐含的改变**

- C99 新增 ?
_Bool _Complex _Imaginary inline restrict

- C11 新增
_Alignas _Alignof _Atomic _Generic _Noreturn _Static_assert _Thread_local

## 数据类型

- 基本类型 --> 整型/浮点型
属于算数类型
关键字:
char、unsigned char、 signed char  
int、 unsigned int  
short、 unsigned short  
long、 unsigned long  

浮点型 --> float、 double、 long double

- 枚举类型
也属于算数类型，表明在该变量在程序中只能赋予其一定的**离散整数值**

- void 类型

- 派生类型
包括 --> 指针、 数组、 函数、 结构类型、 共用体类型  
数组 和 结构 还统称为**聚合类型**
