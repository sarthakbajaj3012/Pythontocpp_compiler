#include <iostream>
float test1( float x,float y){
	for(int ele = x;ele<y;ele++){
		std::cout << ele << std::endl;
	}
	return x;
}
int main(){
	int x = 10;
	int y = 40;
	float q = test1(x,y);
	return 0; 
}