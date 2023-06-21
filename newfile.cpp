#include <iostream>
#include<any>
int main(){
	std::any y = std::string("hello");
	if(std::any_cast<std::string>(y) == "hell"){
		std::cout << std::any_cast<std::string>(y) <<std::endl;
	}
	else if(std::any_cast<std::string>(y) == "hello"){
		std::cout << "Pass" <<std::endl;
	}
	else {
		std::cout << "error" <<std::endl;
	}

	return 0; 
}