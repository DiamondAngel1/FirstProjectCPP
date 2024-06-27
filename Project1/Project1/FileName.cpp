#include<iostream>
#include<Windows.h>
using namespace std;
int Sum(int x, int y) {
	return x + y;
}
void Init(int& x, int& y) {
	cin >> x >> y;
}

int main() {
	int x , y ;
	Init(x, y);
	cout << Sum(x, y) << endl;
}