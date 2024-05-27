#include <iostream>

class num1{
    protected:
    int n1;

    public:
    void get_n1(){
        std::cout << "Enter num1: ";
        std::cin >> n1;
    }
};

class  num2
{
    protected:
        int n2;
    public:
        void get_n2(){
            std::cout << "Enter num2: ";
            std::cin >> n2;
        }
    
};

class sum: public num1, public num2{
    private:
    int res;

    public:
    void display(){
        res=n1+n2;
        std::cout << "Sum: " << res << std::endl;
    }
};

int main(){
    sum s1;
    s1.get_n1();
    s1.get_n2();
    s1.display();
    return 0;
}

