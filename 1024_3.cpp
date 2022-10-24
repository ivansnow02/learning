/**
 * @file 1024_3.cpp
 * @author ivan
 * @brief 求二维数组的鞍点
【问题描述】找出一个二维数组（以三行四列的数组为例）中的鞍点，即该位置上的元素在该行上值最大，在该列上值最小（也可能没有鞍点）。
【输入形式】二维数组（以三行四列的数组为例）
【输出形式】如果有鞍点，输出鞍点的值及所在行列（例如[1][2]=96 is Saddle Point），如果没有，输出没有鞍点（例如 No Saddle Point）
【样例输入】
  9 80 205 40
  90 60 96 1
  210 3 101 89
【样例输出】
  [1][2]=96 is Saddle Point
【样例说明】请正确输入二维数组，并严格按照【样例输出】的要求输出结果。程序的输入及输出暂时不支持中文字符。
 * @version 0.1
 * @date 2022-10-24
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j, m, k = 0, cnt = 0;
    int a[4][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        m = 0;
        for (j = 1; j < 4; j++)
        {
            if (a[i][j] > a[i][m])
                m = j;
        }
        k = 0;
        for (j = 1 ; j < 3; j++)
        {
            if (a[j][m] < a[k][m])
                k = j;
        }
        if (i == k)
        {
            cnt++;
            printf("[%d][%d] = %d is Saddle Point", i , m , a[i][m]);
        }
    }
    if (cnt == 0)
        cout << "No Saddle Point";
}