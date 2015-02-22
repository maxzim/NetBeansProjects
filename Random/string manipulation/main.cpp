#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (){
    
    int aantal1=10, aantal2=10;
    string categorie1="negers", categorie2="aardappels", enkelvoud1, enkelvoud2;
    
    
    
//    cout << "Hoeveel in de eerste categorie? ";
//    cin >> aantal1 >> categorie1;
//    cout << cout << "Hoeveel in de tweede categorie? ";
//    cin >> aantal2 >> categorie2;
    
//    int lengte1=categorie1.length();
//    string laatsteLetter1 = categorie1.substr(lengte1-1,1);

    
//    if (laatsteLetter1 == "n"){
//        enkelvoud1=categorie1;
//    }else{
//        enkelvoud1=categorie1.erase(lengte1-1,1);
//    }
//    cout << enkelvoud1;
    
    int columnWidth=categorie1.length() + categorie2.length() + 16; //Bepalen van lengte linker kolom
    
    
    
    cout << setw(columnWidth) << categorie1;
    cout << setw(10) << aantal1 << endl;
    cout << setw(columnWidth) << categorie2;
    cout << setw(10) << aantal2 << endl;
    cout << setw(columnWidth) << categorie1+"-tot-"+categorie2+" verhouding";
    cout << setw(10) << aantal1 / aantal2 << endl;
    cout << setw(columnWidth) << categorie2+"-tot-"+categorie1+" verhouding";
    cout << setw(10) << aantal2 / aantal1 << endl;
    
    
    return 0;
}