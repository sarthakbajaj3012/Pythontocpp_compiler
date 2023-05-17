#include <iostream>
float trying( int a, int b){
	return a + b + 4.5;
}
int main(){
	int a = 5;
	int b = 6;
	float c = trying(a, b);
	std::cout << c << std::endl;
	return 0; 
}