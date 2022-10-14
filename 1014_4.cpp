/**
 * @file 1014_4.cpp
 * @author ivan
 * @brief 数字逆序
【问题描述】输入一个int型的整数num，逆向输出其各位数字，同时求出其位数以及各位数字之和。
【输入形式】输入一个整数。
【输出形式】结果为三行，第一行为逆向数字，第二行为各位数字之和，第三行为数字位数。
【样例输入】1000
【样例输出】
  0001
  1
  4
 * @version 0.1
 * @date 2022-10-14
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int n = num;
    int sum = 0, i = 0;
    while(n){
        cout << n % 10;
        sum += n % 10;
        n /= 10;
        i++;
    }
    cout << endl
         << sum << endl
         << i<<endl;
}