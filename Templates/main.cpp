//Daniel Stoddard
//CIS 1202 - 800
//November 29, 2021

#include <iostream>
using namespace std;

template<class T>
T half(T value) {
	return value / 2.0;
}

int half(int value) {
	return round(static_cast<double>(value) / 2);
}

int main() {
	double x = 7.0;
	float y = 5.0f;
	int z = 3;

	cout << half(x) << endl;
	cout << half(y) << endl;
	cout << half(z) << endl;

	return 0;
}