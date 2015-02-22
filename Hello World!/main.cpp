#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    string Naam;
    int Leeftijd;
    
    cout << "Wat is je naam? ";
    cin >> Naam;
    cout << "Hoe oud ben je? ";
    cin >> Leeftijd;
    
    cout << endl;
    cout << "Hallo " << Naam << ",\n";
    cout << "je bent " << Leeftijd << " jaar oud.";
    return 0;
}
