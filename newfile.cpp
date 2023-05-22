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
		return 1;
	} 
	else if(b_ == 1){
		return b_;
	}
	else {
		return a_;
	}
}
int main(){

	int a = 10;
	int b = 15;
	int c = std::any_cast<int>(addtwo(a,b));
	std::cout << c << std::endl;
	return 0; 
}