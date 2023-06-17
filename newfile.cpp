#include <iostream>
int main(){
	float x = 100.5;
	while(x > 0.5){
		std::cout << x <<std::endl;
		x = x/static_cast<float>(2);
	}
	return 0; 
}