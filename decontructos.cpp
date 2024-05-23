#include <iostream>

using std::cout;
using std::cin;
//Deconstructors are as the name suggests it destroys/deallocates the object

class car_info{
    private:
    std::string name;
    
    public:
    car_info(){}
    car_info(std::string n){
        name=n;
    }

    void display(){
        cout << "\nName: " << name << std::endl;
    }


    //Deconstructors are always decalred at last and declared and initialized using `~`infornt of the class name
    //It also doesn't have a return type. And executed at the end of the program.
    ~car_info(){
        cout<<"\nObject " << name << " Deallocated \n";
    }

};

int main(){
    car_info car1("Porsche");
    car1.display();
    return 0;
}