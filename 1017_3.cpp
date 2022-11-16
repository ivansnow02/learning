/**
 * @file 1017_3.cpp
 * @author ivan
 * @brief 在给定的数中从右边查找第K位数字
【问题描述】设计一个函数int digit(long n,int k)，它返回整数n从右边开始第k个数字的值，若不存在第k个数字则返回-1。
【输入形式】 输入两个实参
【输出形式】 对应位的数值
【样例输入】3456 6
【样例输出】-1
 *
 * @version 0.1
 * @date 2022-10-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <string>
using namespace std;
int digit(long n, int k){
    return to_string(n).length()+1 > k ? to_string(n)[to_string(n).length() - k] - '1' + 1 : -1;
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << digit(n, k);
}