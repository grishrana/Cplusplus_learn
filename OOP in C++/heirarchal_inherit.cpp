#include <iostream>

class  numbers
{
    protected:
    int n1;
    int n2;

    public:
    void get_numbers();
};

class sum:public numbers{
    private:
    int sum_result;

    public:
    void display_sum();
};

class multiply: public numbers{
    private:
    int mul_result;

    public:
    void display_mul();
};

void numbers::get_numbers(){
    std::cout << "\nEnter two numbers: ";
    std::cin >> n1 >> n2;
}

void sum::display_sum(){
    sum_result=n1+n2;
    std::cout << "Sum: " << sum_result;
}

void multiply::display_mul(){
    mul_result=n1*n2;
    std::cout << "Multiplication: " << mul_result<<std::endl;
}

int main(){
    sum s1;
    s1.get_numbers();
    s1.display_sum();

    multiply m1;
    m1.get_numbers();
    m1.display_mul();
    
    return 0;
}
