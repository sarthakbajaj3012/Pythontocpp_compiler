#include<iostream>
#include<any>

int main() {

    std::any temp = std::string("helloworls");
    std::cout << std::any_cast<std::string>(temp);
    return 0;
}