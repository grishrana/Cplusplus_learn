#include <iostream>

class solution{
    private:
    float p,t,r;

    public:
    void read_data(float a, float b, float c);
    void display_result();
};

void solution::read_data(float a, float b, float c){
    p=a,t=b,r=c;
}

void solution::display_result(){
    float si=(p*t*r)/100;
    std::cout << "\nSimple Interest: " << si << std::endl;
}

int main(){
    solution data1;
    float a,b,c;
    std::cout << "Enter principle, time, rate(%): ";
    std::cin >> a >> b >> c;
    data1.read_data(a,b,c);
    data1.display_result();
    return 0;
}