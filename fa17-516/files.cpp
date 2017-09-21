#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int counter = 0,
		temp = 0,
		total = 0,
		totalCount = 0;


	ifstream fin;
	fin.open("data/integers");

	while (counter < 10){
		fin >> temp;
		total += temp;
		counter++;
	}

	fin.close();

	cout << total << endl;
	
	return 0;
}
