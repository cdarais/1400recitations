#include <iostream>
#include <fstream>

using namespace std;

int main(){

	//variables
	int total = 0, number = 0;
	ifstream fin;

	//open file
	fin.open("data/integers");

	while (fin >> number){
		cout << number << " ";
		total += number;
	}
	//close file
	fin.close();
	
	//output results
	cout << endl << endl << total << endl;

	return 0;
}
