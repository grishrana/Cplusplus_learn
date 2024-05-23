#include <iostream>

class employee{
    private:
        std::string ename;
        int eid;
        float salary;

    public:
        void inputdata(){
            std::cout << "\nEnter name: ";
            std::getline(std::cin, ename);
            std::cout << "Enter Id: ";
            std::cin >> eid;
            std::cout << "Enter Salary: ";
            std::cin >> salary;
        }

        void displaydata(){
            std::cout << "\nName: " << ename << " EmployeeId: " << eid
            << " Salary: " << salary << std::endl;
        }

};

int main(){
    employee e1;
    e1.inputdata();
    e1.displaydata();
    return 0;

}