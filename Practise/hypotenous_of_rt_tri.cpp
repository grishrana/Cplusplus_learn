#include <iostream>
#include <cmath>

int main(){
    float a,b,c;
    std::cout << "Enter base and perpendicular: ";
    std::cin >> a >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    std::cout << "Hypotenous of Triangle: " << c << std::endl;
    return 0;
}