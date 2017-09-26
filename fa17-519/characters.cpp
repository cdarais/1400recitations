#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//variables
	string alphabet = "";
	char c;
	ifstream fin;
	fin >> noskipws;
	//read in chars
	fin.open("data/characters");

	while(!fin.eof()){
		
		fin >> c;
		
		if (c == 'z' || c == 'Z') c -= 25;
		else if (isalpha(c)) c++;
		alphabet += c;
	}
	

	cout << alphabet << endl;



	fin.close();

	return 0;
}
