#include <iostream>

class students{
    protected:
    std::string name;

    public:
    void get_name();
};

class test:public students{
    protected:
    float marks;

    public:
    void get_marks();
};

class results: public test{
    protected:
    std::string res;

    public:
    void check_result();
};

void students::get_name(){
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
}

void test::get_marks(){
    std::cout << "Enter marks for " << name <<" : ";
    std::cin >> marks;
}

void results::check_result(){
    res=(marks<45)?"Fail":"Pass";
    std::cout<<name<<"\t"<<marks<<"\t"<<res<<std::endl;
}

int main(){
    results r1;
    r1.get_name();
    r1.get_marks();
    r1.check_result();
    return 0;
}


