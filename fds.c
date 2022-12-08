#include<stdio.h>
//请输出十进制整数1234对应的八进制和十六进制
//int main() {
//    int a = 1234;
//    printf("%#o %#X", a, a);
//    return 0;
//}
//读入一个字符，一个整数，一个单精度浮点数，按顺序输出它们，并用空格分隔，浮点数保留 6 位小数。
//int main() {
//    char a = 0;
//    int b = 0;
//    float c = 0;
//    scanf("%c%d%f", &a, &b, &c);
//    printf("%c %d %.6f", a, b, c);
//    return 0;
//}
//输出 3 个整数以第二三个数字占 8 个空格靠右对齐输出
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%-8d%-8d%-8d", a, b, c);
//    return 0;
//}
//输入一个十六进制数a，和一个八进制数b，输出a + b的十进制结果
//int main() {
//    int a, b;
//    scanf("%x%o", &a, &b);
//
//    printf("%d", a + b);
//    return 0;
//}
//给你两个整数，要求输出这两个整数的和
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}
//输入两个整数a, b, 输出a / b的值，只保留整数部分
//int main(void)
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", a / b);
//    return 0;
//}
//输入两个整数a, b, 输出a 除以b的余数，5除以2的余数为1，10除以4的余数为2
//int main(void)
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", a % b);
//    return 0;
//}
//给定一个浮点数，要求得到该浮点数的个位数。
//int main() {
//    float a = 0;
//    scanf("%f", &a);
//    //int b = (int)a;
//    printf("%d", ((int)a) % 10);
//    return 0;
//}
//张电影票价是100元，计算 x 位朋友的总票价是多少
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", a * 100);
//    return 0;
//}
int removeElement(int* nums, int numsSize, int val) {
    int left = 0, right = numsSize;
    while (left < right) {
        if (nums[left] == val) {
            nums[left] = nums[right - 1];
            right--;
        }
        else {
            left++;
        }
    }
    return left;
}