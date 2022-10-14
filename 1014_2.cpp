/**
 * @file 1014_2.cpp
 * @author ivan
 * @brief比赛对阵策略
【问题描述】两个乒乓球队进行比赛，各出三人。甲队为A,B,C三人，乙队为X,Y,Z三人。
以抽签决定比赛名单。有人向队员打听比赛的名单。A说他不和X比，C说他不和X,Z比，请编程找出三对赛手间的对阵情况。
【输入形式】无
【输出形式】标准输出，三对赛手对阵对阵情况，每对内部用“--”隔开，每对间使用一个空格隔开。
【样例输入】
【样例输出】A--Z  B--X  C--Y
【样例说明】注意输出格式，空格和回车不要出现混乱。
 * @version 0.1
 * @date 2022-10-14
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 2; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int k = 2;
            if (i != j && i != k && j != k)
                printf("A--%c B--%c C--%c", 'W' + i, 'W' + j, 'W' + k);
        }
    }
}