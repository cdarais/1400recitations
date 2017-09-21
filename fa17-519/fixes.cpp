#include <iostream>
#include <fstream>


using namespace std;

int main(){
	
	int counter = 0, inputText;
	float hwPoints = 0;
	ifstream iFile;
	
	iFile.open("input.txt");
		
	while (counter < 10){
		iFile >> inputText;
		hwPoints += inputText;
		counter++;
	}

	cout << hwPoints << endl;
	
	iFile.close();

	return 0;
}
