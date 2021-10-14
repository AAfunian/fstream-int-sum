// fstream int sum
// 10/13/2021
// Amir Afunian

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int sum = 0;
	int data;
	char temp;
	ifstream ist{ "mydata.txt" };
	while (true) {
		if (ist >> temp) {
			if (isdigit(temp) || temp == '-') {
				ist.unget();
				ist >> data;
				sum += data;
			}
		}
		else if (ist.eof()) {
			cout << sum;
			return 0;
		}
	}
	return 0;
}