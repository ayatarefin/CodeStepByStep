// Write a console program with a main function that prompts the user for two integers, a min and a max, and prints the numbers in the range from min to max inclusive in a square pattern. Each line of the square consists of a wrapping sequence of integers increasing from min and max. The first line begins with min, the second line begins with min + 1, and so on. When the sequence in any line reaches max, it wraps around back to min. You may assume that min is less than or equal to max. Here is an example dialogue:

#include <iostream>
using namespace std;
void numberSquare(int min,int max) {
	for (int i = min; i <= max; ++i) {
		int count = i;
		for (int j = min; j <=max; ++j) {
			if (count > max) {
				count = min;
			}
			cout << count;
			count++;
		}
		cout << endl;
	}
}
int main() {
	int min = 0;
	int max = 0;
	cout<<"Min? ";
	cin >> min;
	cout<<"Max? ";
	cin >> max;
	numberSquare(min, max);
	return 0;
}