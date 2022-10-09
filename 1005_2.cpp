#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double pi = 3.14;
    double r;
    cin >> r;
    cout << 4.0 / 3.0 * pi * pow(r, 3) << ' ' << 9.1 * pow(10, -2) * (4.0 / 3.0 * pi * pow(r, 3)) << endl;
    return 0;
}