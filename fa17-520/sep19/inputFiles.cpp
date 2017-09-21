#include <iostream>
#include <fstream>

using namespace std;

void AddTwoNumbers(int a, int b){
	int c = a + b;
	cout << c << endl;
}

int main(){

	int total = 0, number = 0;

	ifstream fin;


	fin.open("data/input");

	while (fin >> number){
		cout << number << " ";
		total += number;
	}
	cout << endl << endl << total << endl;

	fin.close();

	int number1 = 34, number2 = 3;

	AddTwoNumbers(number1, number2);


	return 0;
}
