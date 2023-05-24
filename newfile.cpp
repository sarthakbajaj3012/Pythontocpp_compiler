#include <iostream>
float temp( ){
	float a = 10.5;
	int b = 10;
	return a + b;
}
int main(){
	float  c = temp();
	std::cout << c << std::endl;
	return 0; 
}