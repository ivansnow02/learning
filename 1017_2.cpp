/**
 * @file 1017_2.cpp
 * @author ivan
 * @brief 找出亲密对数
【问题描述】求数n之内的亲密对数。所谓“亲密对数”，即A的所有因子（包含1但不包含其本身）之和等于B，而B的所有因子之和等于A。
【输入形式】某个数字n。
【输出形式】此数字n之内的亲密对数，如果没有则输出No。
【样例输入】400
【样例输出】220 284
【样例说明】输出结果每行输出一对亲密数，剔除重复的，按每行第一个数的大小排序。
 * @version 0.1
 * @date 2022-10-17
 *
 * @copyright Copyright (c) 2022
 */
#include <iostream>
using namespace std;
int sum(int x)
{
    int s = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            s += i;
        }
    }
    return s;
}
int main()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if(i<sum(i)&&sum(sum(i))==i){
            flag = 1;
            cout << i << ' ' << sum(i) << endl;
        }
    }
    if (!flag)
        cout << "No";
}