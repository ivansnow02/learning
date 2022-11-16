/**
 * 字符串排序
  【问题描述】有5个字符串，首先将它们按照字符串中字符个数由小到大排序，
  再分别取出每个字符串的第三个字母合并成一个新的字符串输出（若少于三个字符的输出空格）。要求：利用字符串指针和指针数组实现。

  【输入形式】5个字符串，用回车分隔

  【输出形式】输出一个字符串：按5个字符串中字符个数由小到大排序，再分别取出每个字符串的第三个字母合并成一个新的字符串输出
  ，若少于三个字符的输出一个空格

  【样例输入】

test1234
123test
cumt
think
apples

  【样例输出】

  cumt think apples 123test test1234

  concatenate string:mip3s

  【样例说明】输出的第一行中，每个字符串后面有一个空格。字符数量相等的串相对顺序不变。
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cpr(string x, string y) {
	return x.length() < y.length();
}
int main() {
	string s[6];
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
	}
	sort(s, s + 5, cpr);
	for (auto x : s) {
		cout << x << ' ';
	}
	cout << endl << "concatenate string:";
	for (int i = 0; i < 5; i++) {
		if (s[i].length() < 3)cout << ' ';
		else cout << s[i][2];
	}
	cout<<endl;
}
