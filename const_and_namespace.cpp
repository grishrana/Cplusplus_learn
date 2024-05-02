#include <iostream>

namespace default_area{
    int area=0;
}
/*
Namespace = provides a solution for preventing name conflicts
            in large projects. Each entity needs a uniques name.
            A namespace allows for identically named entities as
            long as the namespaces are different.
*/


int main(){
    /*
    one can use `using namespace std` but it has thousands of entities and there will be a 
    high likelihood of having a naming conflict eg: std has entitiy data so we cannot set 
    a variable name data. So we can use the below alternative:
    */
    using std::cout;
    using std::cin;

    const double PI = 3.14; //const keyword is used to denote a variable which will never have it's value changed
    int radius;
    // PI=8009; if you redeclare the constant variable it will throw an error

    cout << "\nEnter the raidus: ";
    cin >> radius;
    if (radius==0){
        // or we can delcare using namespace default_area
        cout << "Area: " << default_area::area << std::endl; 
    }

    else{
        int area= PI*radius*radius;
        cout << "Area: " << area << std::endl; // `std::endl`=="\n"
    }

}