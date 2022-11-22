/**
 *
  三角形类
  【问题描述】先定义一个能描述平面上一条线段的类Beeline，包含私有数据成员为线段两个端点的坐标(X1，Y1，X2，Y2)，在类中定义形参默认值为0的构造函数，计算线段长度的公有成员函数Length()，显示线段两个端点坐标的公有成员函数show()。然后再定义一个能描述平面上三角形的类Triangle，其数据成员为用Beeline定义的对象line1，line2，line3。在类中定义的构造函数要能对对象成员进行初始化。再定义计算三角形面积的函数Area()及显示三条边端点坐标及面积的函数Print()，Print()函数中可调用show()函数显示三条边两端点坐标。

  【输入形式】输入三角形三个顶点的坐标(x1,y1)、(x2,y2)、(x3,y3)。其中 -100 <= x1,x2,x3,y1,y2,y3 <= 100，且为整数。

  在主函数中创建类对象tri(x1,y1,x2,y2,x3,y3)，对应line1(x1, y1, x2, y2),line2(x2,y2,x3,y3),line3(x3,y3,x1,y1)。

  【输出形式】调用Print()函数，将三角形三条边的端点坐标及面积。面积保留两位小数。具体格式见样例。

  【样例输入】

  0 0

  0 4

  3 0

  【样例输出】

  Three edges' points are listed as follows:

  (0,0),(0,4)

  (0,4),(3,0)

  (3,0),(0,0)

  The area of this triangle is:6.00

  【提示】计算面积建议用海伦公式。严格按照【样例输出】的格式输出结果。如果没有使用类，得分为0。
 */


#include<iostream>
#include<cmath>
using namespace std;
class Beeline {
  private:
	int x1, y1, x2, y2;
  public:
	Beeline(int x_1, int y_1, int x_2, int y_2) {
		x1 = x_1;
		y1 = y_1;
		x2 = x_2;
		y2 = y_2;
	}
	double Length() {
		return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	}
	void show() {
		cout << "(" << x1 << "," << y1 << "),(" << x2 << "," << y2 << ")" << '\n';
	}
};
class Triangle {
  private:
	Beeline line1, line2, line3;
  public:
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3): line1(x1, y1, x2, y2), line2(x2, y2, x3, y3), line3(x3, y3, x1, y1) {}
	double Area() {
		double p = (line1.Length() + line2.Length() + line3.Length()) / 2;
		return sqrt(p * (p - line1.Length()) * (p - line2.Length()) * (p - line3.Length()));
	}
	void Print() {
		cout << "Three edges' points are listed as follows:" << '\n';
		line1.show();
		line2.show();
		line3.show();
	}
};
int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	Triangle triangle(x1, y1, x2, y2, x3, y3);
	triangle.Print();
	printf("The area of this triangle is:%.2lf\n",triangle.Area());
}
