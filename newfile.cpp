#include <iostream>
 int main(){
	float x = 15.5;
	while(x > 10){
		std::cout << x << std::endl;
		x = x - 1;
		if(x == 12){
			std::cout << x << std::endl;
		}
	}
	return 0; 
}