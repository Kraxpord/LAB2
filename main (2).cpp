#include <iostream> 
using namespace std; 
 
double main() 
{ 
    double sid1; 
    cout << " double the side1 of a cube : "; 
    cin >> sid1; 
    double sid2; 
    cout << " double the side2 of a cube : "; 
    cin >> sid2; 
    double sid3; 
    cout << " double the side3 of a cube : "; 
    cin >> sid3; 
    float volcu; 
    cout << "\n\n Calculate the volume of a cube :\n"; 
    cout << "---------------------------------------\n"; 
    volcu = (sid1 * sid2 * sid3); 
    cout << " The volume of a cube is : " << volcu << endl; 
    cout << endl; 
    return 0; 
     
}