#include<stdio.h>
//�����ʮ��������1234��Ӧ�İ˽��ƺ�ʮ������
//int main() {
//    int a = 1234;
//    printf("%#o %#X", a, a);
//    return 0;
//}
//����һ���ַ���һ��������һ�������ȸ���������˳��������ǣ����ÿո�ָ������������� 6 λС����
//int main() {
//    char a = 0;
//    int b = 0;
//    float c = 0;
//    scanf("%c%d%f", &a, &b, &c);
//    printf("%c %d %.6f", a, b, c);
//    return 0;
//}
//��� 3 �������Եڶ���������ռ 8 ���ո��Ҷ������
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%-8d%-8d%-8d", a, b, c);
//    return 0;
//}
//����һ��ʮ��������a����һ���˽�����b�����a + b��ʮ���ƽ��
//int main() {
//    int a, b;
//    scanf("%x%o", &a, &b);
//
//    printf("%d", a + b);
//    return 0;
//}
//��������������Ҫ����������������ĺ�
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}
//������������a, b, ���a / b��ֵ��ֻ������������
//int main(void)
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", a / b);
//    return 0;
//}
//������������a, b, ���a ����b��������5����2������Ϊ1��10����4������Ϊ2
//int main(void)
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", a % b);
//    return 0;
//}
//����һ����������Ҫ��õ��ø������ĸ�λ����
//int main() {
//    float a = 0;
//    scanf("%f", &a);
//    //int b = (int)a;
//    printf("%d", ((int)a) % 10);
//    return 0;
//}
//�ŵ�ӰƱ����100Ԫ������ x λ���ѵ���Ʊ���Ƕ���
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