#include <iostream>
class numbers{
    protected:
    int a;
    void get_num()
    {
        std::cout << "Enter a number: ";
        std::cin >> a;
    }
};

class primecheck: private numbers{
    public:
    void check(){
        int count=0;
        get_num();
        for(int i=1;i<=a;i++){
            if (a%i==0)
                count++;

        }

        if(count==2){
            std::cout << "\nPrime\n";
        }
        else{
            std::cout << "\nNot Prime\n";
        }
    }

    ~primecheck(){
        std::cout << "Object destroyed.\n";
    }
};

int main(){

    primecheck n1;
    n1.check();
    return 0;
}