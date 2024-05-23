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

        void displaydata(){
            std::cout << "\nName: " << ename << " EmployeeId: " << eid
            << " Salary: " << salary << std::endl;
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
    e1.displaydata();
    return 0;

}