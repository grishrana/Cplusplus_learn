#include <iostream>

using namespace std;

class book_info{
    private:
    int isbn;
    string name;
    float price;

    public:
    void read_display_info(){
        cout << "\nEnter ISBN: ";
        cin >> isbn;
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Price: ";
        cin >> price;

        cout << "\nName: " << name << "\tISBN: " << isbn << "\tPrice: " << price << endl;

    }
};

int main(){
    book_info book1;
    book1.read_display_info();
    return 0;
}