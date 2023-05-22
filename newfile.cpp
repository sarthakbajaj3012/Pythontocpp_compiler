#include <iostream>
#include <any>
std::any addtwo( std::any a,std::any b){
	int a_;
	if(a.type() == typeid(int)){
		a_ = std::any_cast<int>(a);
	}
	if(a.type() == typeid(float)){
		a_ = static_cast<float>(a_);
		a_ = std::any_cast<int>(a);
	}
	int b_;
	if(b.type() == typeid(int)){
		b_ = std::any_cast<int>(b);
	}
	if(b.type() == typeid(float)){
		b_ = static_cast<float>(b_);
		b_ = std::any_cast<int>(b);
	}
	if(a_ == 1){
		return b_;
	}
	b_ = 	std::any_cast<int>(addtwo(a_ - 1,b_ - 1));
	return 0;
}
int main(){

	int a = 10;
	int b = 15;
	std::any_cast<int>(addtwo(a,b));
	std::cout << a << std::endl;
	return 0; 
}