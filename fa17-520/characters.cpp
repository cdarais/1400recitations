#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//variables
	ifstream fin;
	char c;

	//read in file
	fin.open("data/characters");
	
	fin >> noskipws;
	
	while(fin >> c){
		if (c == 'z' || c == 'Z') c -= 25;
		else if (isalpha(c)) 	c++;
		cout << c;
	}


	fin.close();

	return 0;
}
