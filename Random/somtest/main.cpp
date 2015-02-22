#include <cstdlib>
#include <iostream>

using namespace std;


int main (){
    
    float vechters;
    float nietVechters;
    
    cout << "Hoeveel mensen waren betrokken? ";
    cin >> vechters;
    
    cout << "hoeveel waren niet betrokken? ";
    cin >> nietVechters;
    
    int totaal = vechters + nietVechters;
    float percentageBetrokken = (vechters/totaal)*100;
    
    cout << endl;
    cout << "het totaal aantal is " << totaal << endl;
    cout << "hiervan was " << percentageBetrokken << "% betrokken.\n";
    
    return 0;
}