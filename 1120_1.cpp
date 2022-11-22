/**
 *
  日期类
  【问题描述】设计一个日期类(Date)，用来实现日期的操作。包括一个空构造函数，三个成员函数，其余所需自行决定。
  用成员函数setDate()用来给Date类设置日期。用成员函数isLeapYear()用来判断是否是闰年。
  用成员函数getSkip(Date o)用来计算两个日期之间相差的天数。
  【输入形式】输入两个日期，输入格式参考样例。
  【输出形式】判断两个日期是否是闰年，以及两个日期的间隔天数，输出格式参考样例。
  【样例输入】
  2012 10 20
  2017 11 07
  【样例输出】
  2012 is leap year.
  2017 is not leap year.
  The skip of two date is 1844.
  注意：时间差始终为正数。
 */
#include <iostream>
#include <cmath>
using namespace std;
class Date {
  public:
	Date() {};
	void setDate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	bool isLeapYear() {
		if (((year % 4 == 0) && (year % 100)) || (year % 400 == 0)) {
			return true;
		}
		return false;
	}
	int getSkip(Date);
	friend int days(Date);
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
  private:
	int year;
	int month;
	int day;
};
bool isLeap(int year) {
	if (((year % 4 == 0) && (year % 100)) || (year % 400 == 0)) {
		return true;
	}
	return false;
}
int months[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days(Date d) {
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
int Date::getSkip(Date o) {
	int sum = 0;
	for (int i = year; i < o.year; i++) {
		sum += 365;
		if (isLeap(i)) sum++;
	}
	sum += days(o);
	sum -= days(*this);
	return abs(sum);
}

int main() {
	Date date[2];
	int y, m, d;
	for (int i = 0; i < 2; i++) {
		cin >> y >> m >> d;
		date[i].setDate(y, m, d);
	}
	for (int i = 0; i < 2; i++) {
		cout << date[i].getYear() << " is ";
		if (!date[i].isLeapYear()) cout << "not ";
		cout << "leap year.\n";
	}
	cout << "The skip of two date is " << (date[0].getYear()<date[1].getYear()?date[0].getSkip(date[1]):date[1].getSkip(date[0])) << ".";


}
