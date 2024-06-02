#include <iostream>

// `::` is called scope resolution operator

class employee{
    private:
        std::string ename;
        int eid;
        float salary;

    public:
        void getdata();
        void putdata();

};

void employee::getdata(){
    std::cout << "\nEnter name: ";
    std::getline(std::cin, ename);
    std::cout << "Enter Id: ";
    std::cin >> eid;
    std::cout << "Enter Salary: ";
    std::cin >> salary;
}

void employee::putdata(){
    std::cout << "\nName: " << ename << " EmployeeId: " << eid
    << " Salary: " << salary << std::endl;
}

int main(){
    employee e1;
    e1.getdata();
    e1.putdata();
    return 0;

}
