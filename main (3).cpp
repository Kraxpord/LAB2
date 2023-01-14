#include <iostream> 
using namespace std; 
struct Book { 
    char name[100]; 
    int avtor; 
    int izdatelstvo; 
    int Pages; 
}; 
 
int main() { 
    Book b; 
 
    cout << "Enter name of book\n"; 
    cin.getline(b.name, 100); 
    cout << "Enter avtor  of employee\n"; 
    cin >> b.avtor; 
    cout << "Enter Izdatelstvo \n"; 
    cin >> b.izdatelstvo; 
    cout << "Enter Pages \n"; 
    cin >> b.Pages; 
 
    cout << "\n*** Book Details ***" << endl; 
    cout << "Name : " << b.name << endl; 
    cout << "Avtor  : " << b.avtor << endl; 
    cout << "Izdatelstvo Code : " << b.izdatelstvo; 
    cout << "Pages : "<< b.Pages; 
 
 
    return 0; 
}