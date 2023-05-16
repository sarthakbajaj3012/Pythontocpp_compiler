#include <iostream>
int main(){
	int a = 20;
	while(a > 1){
		if(a > 2){
			std::cout << a << std::endl;
			} else {
				std::cout << a << std::endl;
		}

		a = a - 1;
	}
	int c = a + 10;
	std::cout << c << std::endl;
	return 0; 
}