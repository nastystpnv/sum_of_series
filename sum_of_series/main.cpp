#include <iostream>
#include <math.h>
using namespace std;
int factorial(int a) {
	if (a == 0 || a == 1) {
		return 1;
	}
	else {
		int b = a * factorial(a - 1);
		return b;
	}
}
int main() {
	const int n = 6;
	const int m = 6;
	double step = 0.8;
	double result[m];
	for (int j = 0; j < m; j++) {
		double x = j * step;
		double sum = 0;
		for (int i = 0; i < n; i++) {
			double y = (pow((-1), i) * pow(x, 2 * i + 1)) / ((2 * i + 1) * (factorial(2 * i + 1)));
			sum += y;
		}
		result[j] = sum;
	}
	for (int k = 0; k < m; k++) {
		cout << "x = " << k * step << ", y= " << result[k] << endl;
	}	 
	return 0;
}