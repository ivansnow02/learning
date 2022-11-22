/**
 * 计算天数
  【问题描述】定义一个包括年、月、日的结构体变量，读入年、月、日，计算该日在当年中是第几天。注意闰年问题。

  请写一个函数days实现计算，将读入的结构体变量传递给days函数，计算后将答案返回给main函数进行输出。

  【输入形式】三个整数，分别表示年、月、日。保证输入是实际存在的日期，且年份在1000至3000之间（包含1000和3000）。

  【输出形式】输出该日期是一年中的第几天。请注意行尾输出换行。

  【样例输入】2012 12 21

  【样例输出】356
 */

#include <iostream>
using namespace std;
struct Day {
	int year;
	int month;
	int day;
};
int months[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days(Day d) {
	int sum = 0;
	if (((d.year % 4 == 0) && (d.year % 100)) || (d.year % 400 == 0)) {
		months[2] = 29;
	}
	for (int i = 1; i < d.month; i++) {
		sum += months[i];
	}
	sum += d.day;
	months[2] = 28;
	return sum;
}
int main() {
	Day day;
	cin >> day.year >> day.month >> day.day;
	cout << days(day);
}
