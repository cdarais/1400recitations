#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	//variables
	string inputText, finishedString;
	ifstream fin;
	int counter = 0;

	//open file
	fin.open("input");

	//read in values
	while (counter < 10){ //!true = false
		fin >> inputText;
		finishedString = finishedString + " " + inputText;
		counter++;
	}

	//close file
	fin.close();

	cout << finishedString << endl;

	return 0;
}
