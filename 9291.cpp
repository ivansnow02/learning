#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=0;i<=10;i++){
		for(int j = 0; j<i;j++){
			cout<<' ';
		}
		for(int j = 10; j>i;j--){
			cout<<'*';
		}
		for(int j = 9; j>i;j--){
			cout<<'*';
		}
		cout<<endl;
	}
}
