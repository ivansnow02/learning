/**
 * @file 1024_2.cpp
 * @author ivan
 * @brief 学生成绩统计
【问题描述】定义数组存储5位学生的姓名和4科考试的成绩，计算并输出每个学生的总成绩和平均成绩，找出平均成绩最高的学生姓名。
【输入形式】依次输入每位学生的姓名和4科考试的成绩。
【输出形式】1）输出每个学生的总成绩和平均成绩；2）输出平均成绩最高的学生姓名。
【样例输入】输入的数据之间间隔一个空格，如“zhangsan 87 76 91 79”中，“zhangsan”与“87”之间为一个空格
 zhangsan 87 76 91 79
 lisi 90 89 78 69
 wangwu 80 88 91 85
 zhaoqian 77 79 78 75
 sunli 89 87 88 87
【样例输出】下列输出内容格式如下：cout<<setiosflags(ios::left)<<setw(10)<<Name<<setw(9)<<TotalScore<<AverageScore<<endl。
 其中"Name"、"TotalScore"、"AverageScore"用具体的数值替代，如下：
 Name TotalScore AverageScore
 zhangsan  333      83
 lisi      326      81
 wangwu    344      86
 zhaoqian  309      77
 sunli     351      87
 Student with the highest AverageScore is sunli,AverageScore is 87
【样例说明】此例共7行，平均成绩最高是sunli，但其他用例数据得到的结果会不同。程序的输入及输出暂时不支持中文字符。
 * @version 0.1
 * @date 2022-10-24
 * @copyright Copyright (c) 2022
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string name[6];
int test[10][6];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> name[i] >> test[0][i] >> test[1][i] >> test[2][i] >> test[3][i];
        test[4][i] = test[0][i] + test[1][i] + test[2][i] + test[3][i];
        test[5][i] = test[4][i] / 4;
    }
    cout << "Name TotalScore AverageScore" << endl; //好蠢。。。
    for (int i = 0; i < 5; i++)
    {
        cout << setiosflags(ios::left) << setw(10) << name[i] << setw(9) << test[4][i] << test[5][i] << endl;
    }
    string maxName;
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < test[5][i])
        {
            max = test[5][i];
            maxName = name[i];
        }
    }
    cout << "Student with the highest AverageScore is " << maxName << ",AverageScore is " << max;
}