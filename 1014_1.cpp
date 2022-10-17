/**
 * @file 1014_1.cpp
 * @author ivan
 * @brief百鸡问题
【问题描述】n元买100只鸡，公鸡每只5元，母鸡每只3元，小鸡每只1/3元，设公鸡、母鸡、小鸡的数量分别记为x，y，z，求所有可能的解。
【输入形式】标准输入，总钱数n
【输出形式】标准输出，输出x y z 的值，按照x,y,z依次增大顺序输出
【样例输入】100
【样例输出】
  x=0,y=25,z=75
  x=4,y=18,z=78
  x=8,y=11,z=81
  x=12,y=4,z=84
【样例说明】每行一个解，注意逗号为英文字符，每行数据顶格输出。
 * @version 0.1
 * @date 2022-10-14
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    for (int x = 0; x <= n / 5; x++)
    {
        for (int y = 0; y <= n / 3; y++)
        {
            if (x * 5 + y * 3 + double(100 - x - y) / 3 == double(n))
                printf("x=%d,y=%d,z=%d\n", x, y, 100 - x - y);
        }
    }
}