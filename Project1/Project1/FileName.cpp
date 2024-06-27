#include<iostream>
#include<Windows.h>
using namespace std;
int Sum(int x, int y) {
	return x + y;
}
int main() {
	int x = 10, y = 25;
	cout << Sum(x, y) << endl;
}