#include <iostream>

using namespace std;

int add(int z){
	return z + z;
}

float division(int x, int y, int z){
	return (float)(x * x) / y * z + y;
}

int main(){
	
	int a = 33, b = 12, c = 0, d = 0;
	float f = 0, g = 0;
	c = add(a);
	d = add(b);
	
	
	f = division(a,b,a);
	g = division(b,b,b);
	
	cout << a + b << endl;
	cout << a + a << endl;

	cout << add(a) << endl;
	cout << add(b) << endl;

	cout << c << endl;
	cout << d << endl;

	cout << f << endl;
	cout << g << endl;
	
	cout << multiply((int)division(a,b,a), 0);

	return 0;
}

//while (fin >> v >> h) or fin.good() dont do it -> fin.eof()
