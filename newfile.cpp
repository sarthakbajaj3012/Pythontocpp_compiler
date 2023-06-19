#include <iostream>
#include<any>
int main(){
	std::any x = 100.5f;
	while(std::any_cast<float>(x) > 0.5){
		std::cout << std::any_cast<float>(x) <<std::endl;
		x = std::any_cast<float>(x)/static_cast<float>(2);
	}
	return 0; 
}