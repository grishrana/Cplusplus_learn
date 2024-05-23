#include <iostream>

class employee{
    private:
        std::string ename;
        int eid;
        float salary;

    public:
        employee(std::string n, int id, float s){
            ename=n;
            eid=id;
            salary=s;
        }

        employee(employee &emp){
            ename=emp.ename;
            eid=emp.eid;
            salary=emp.salary;
        }
        void displaydata(){
            std::cout << "Name: " << ename << " EmployeeId: " << eid
            << " Salary: " << salary << std::endl;
        }

        ~employee(){
            std::cout << "Object deallocated\n";
        }

};

int main(){
    std::string n;
    int id;
    float s;
    
    std::cout << "\nEnter name: ";
    std::getline(std::cin, n);
    std::cout << "Enter Id: ";
    std::cin >> id;
    std::cout << "Enter Salary: ";
    std::cin >> s;

    employee e1(n,id,s);
    employee e2(e1);

    std::cout <<"\nE1 data:\n";
    e1.displaydata();

    std::cout <<"\nE2 data:\n";
    e2.displaydata();

    return 0;

}