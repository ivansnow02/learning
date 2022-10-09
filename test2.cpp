#include <iostream>
using namespace std;
int main(){
	int x = 1;
	int y = 0;
	int a = 0, b = 0;
	switch (x) {
	case 1:
		switch (y) {
		case 0:
			a++;//TODO
			break;
		case 2:
			a--;//TODO
			break;
		}//TODO
	case 2:
		a++,b--;//TODO
		break;
	case 3:
		a++;b++;//TODO
	}
	cout<<a<<" "<<b;
}
