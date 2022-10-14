/**
 * @file 1014_3.cpp
 * @author ivan
 * @brief 猴子吃桃问题
【问题描述】猴子第1天摘了若干个桃子，当即吃了一半，还不解馋，又多吃了一个。第2天，吃剩下的桃子的一半，还不过瘾，又多吃了一个。
以后每天都吃前一天剩下的一半多一个，到第n天想再吃时，只剩下一个桃子了。请问第一天共摘了多少个桃子？
【输入形式】剩下一个桃子的天数n。
【输出形式】第一天共摘的桃子个数。
【样例输入】10
【样例输出】1534
【样例说明】只需输入和输出数据，不要有多余字符出现。
 * @version 0.1
 * @date 2022-10-14
 * @copyright Copyright (c) 2022
 *
 */
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int sum=1;
    for (int i = n-1; i >= 1; i--){
        sum=(sum+1)*2;
    }
    printf("%d", sum);
}
