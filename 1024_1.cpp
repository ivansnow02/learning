/**
 * @file 1024_1.cpp
 * @author ivan
 * @brief 字符统计
【问题描述】输入字符串s，编程统计出s中共出现了多少个数字字符。进一步考虑，如何统计出10个数字字符各自出现的次数。
【输入形式】输入带数字字符的字符串
【输出形式】两行，第一行输出字符串中数字字符的总个数；第二行依次输出从数字字符‘0’到数字字符‘9’的个数
【样例输入】abcdefk12345
【样例输出】
  Number's amount is:5
  '0...9' amount is:0 1 1 1 1 1 0 0 0 0
【样例说明】请严格按照【样例输出】的要求输出结果，程序的输入及输出暂时不支持中文字符。
 * @version 0.1
 * @date 2022-10-24
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num[10]{};
    int digit_sum = 0;
    for (char x : s)
    {
        if (x <= '9' && x >= '0')
        {
            digit_sum++;
            num[x - '0']++;
        }
    }
    cout << "Number's amount is:" << digit_sum << endl
         << "'0...9' amount is:";
    for (int i = 0; i <= 9; i++)
    {
        cout << num[i] << ' ';
    }
    return 0;
}