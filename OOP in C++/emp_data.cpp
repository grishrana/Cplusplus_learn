#include <iostream>

using namespace std;

class emp_data{
    private:
    string name;
    int e_id;
    int contact_no;

    public:
    void read_data();
    void display_data();
};

void emp_data::read_data(){
    cout << "\nEnter emp_id: ";
    cin >> e_id;
    cout << "Enter name: ";
    getline(cin >> ws, name);
    cout << "Enter contact no: +977-9";
    cin >> contact_no;

}

void emp_data::display_data(){
    cout << e_id << "\t" << name << "\t9" << contact_no;
}

int main(){
    emp_data e[5];
    for(int i=0;i<5;i++){
        e[i].read_data();
    }

    cout<<"\ne_id\tName\t\tContact_no\n";
    for(int i=0;i<5;i++){
        e[i].display_data();
        cout << endl;
    }

    return 0;
}

