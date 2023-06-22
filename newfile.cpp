#include <iostream>
#include<any>
int main(){
	std::any x = 50.7f;
	std::any y = 75;
	if((std::any_cast<float>(x) > 51 | std::any_cast<float>(x) == 50.7f) & std::any_cast<int>(y) > 50){
		std::cout << std::any_cast<int>(y) <<" " << std::any_cast<float>(x) <<std::endl;
	}
	else {
		std::cout << "Fail" <<std::endl;
	}

	return 0; 
}