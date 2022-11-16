/**
 * 插入字符串
  【问题描述】从键盘输入一个字符串，并在串中的第一次出现的最大元素后边插入字符串”ab”。

  【输入形式】任意输入一个字符串

  【输出形式】在串中的最大元素后边插入字符串”ab”

  【样例输入】123csCUMT

  【样例输出】123csabCUMT

  【样例说明】为了保证输入的字符串有空格，请使用cin.getline(char* , int); 本系统不支持使用gets。只插入一次ab。
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
	char s[114514];
	cin.getline(s, 114514);
	string s1 = s;
	const string a = "ab";
	int maxs = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (maxs < s1[i]) maxs = s1[i];
	}
	for (int i = 0; i < s1.length(); i++) {
		if (maxs == s1[i]) {
			s1.insert(i + 1, "ab");
			break;
		}
	}
	cout << s1;
}
