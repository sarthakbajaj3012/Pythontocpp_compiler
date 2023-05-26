#include <iostream>
int main(){
	std::string x = "hello my name is";
	for(int i_ = 0; i_ <x.size();i_++){
		char ele = x.at(i_);
		std::cout << ele << std::endl;
};
	return 0; 
}