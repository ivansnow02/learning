/**
 * @file 1017_1.cpp
 * @author ivan
 * @brief 不同进制间的转换
【问题描述】设计一个函数toOcr(int n)，实现把输入的一个十进制数转换为八进制数
【输入形式】十进制数。
【输出形式】与之对应的八进制数。
【样例输入】126
【样例输出】176
 * @version 0.1
 * @date 2022-10-17
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <string>
using namespace std;
string toOcr(int n)
{
    string Ocr = "";
    string Ocr1 = "";
    while (n)
    {
        Ocr = Ocr + to_string(n % 8);
        n /= 8;
    }
    for (int i = Ocr.length() - 1; i >= 0; i--)
        Ocr1 += Ocr[i];
    return Ocr1;
}
int main()
{
    int num;
    cin >> num;
    cout << toOcr(num);
}