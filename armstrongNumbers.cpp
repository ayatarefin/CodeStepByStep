// Write a function named armstrongNumbers that accepts an integer n as a parameter and prints all n-Armstrong numbers. An n-Armstrong number is a number containing exactly n digits where the sum of each digit raised to the nth power equals the number itself. For example, 153 is a 3-Armstrong number because 13 + 53 + 33 = 153. The call of armstrongNumbers(3); should print the following console output:

// 153 370 371 407
// If n is 0 or negative, or if there are no n-Armstrong numbers, print no output.

#include <iostream>
#include <cmath>
using namespace std;
void armstrongNumbers(int num) {
	if (num == 0) {
		return;
	}
	int min = pow(10, num - 1);
	if (num == 1) {
		min = 0;
	}
	int max = pow(10, num);
	for (int i = min; i < max; ++i) {
		int sum = 0, rem = 0, a = i;
		while (a != 0) {
			rem = a % 10;
			sum = sum + pow(rem, num);
			a = (a / 10);
		}
		if (sum == i) {
			cout << i << " ";
		}

	}
}
int main() {
	int num = 0;
	cin >> num;
	armstrongNumbers(num);
	return 0;
}