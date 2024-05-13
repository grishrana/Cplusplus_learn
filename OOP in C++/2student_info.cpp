#include <iostream>

using namespace std;

class student{
    private:
    int roll_no;
    string name;
    float marks;

    public:
    void read_data();
    void display_data();

};

void student::read_data(){
    cout << "\nEnter roll_no: ";
    cin >> roll_no;
    cout << "Enter name: ";
    getline(cin >> ws, name);
    cout << "Enter marks obtained: ";
    cin >> marks;
}

void student::display_data(){
    cout << roll_no << "\t" << name << "\t" << marks;
}

int main(){
    student s[2];
    for(int i=0;i<2;i++){
        s[i].read_data();
    }

    cout << "\nRoll_no\tName\t\tMarks\n";

    for(int i=0;i<2;i++){
        s[i].display_data();
        cout << endl;
    }

    return 0;
}