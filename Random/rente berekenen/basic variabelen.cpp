#include <iostream>
#include <math.h>
using namespace std;   
 
 
int main(){
    
    //PEMDAS
    //In math -- Parenthesis, Exponents, Mult / division, add / sub
    //In C++ Paren. -- Evaluated first
    //Mult / Div 
    //Add / Sub -- Last in priority
    //Evaluates left to right
    
    //1*5-4*3
    //5-12
    double principal=0, rate=0, time=0;
    
    cout << "De rente van de ING wordt per dag bepaald. \n";
    
    cout << "bedrag op rekening?  ";
    cin >> principal;
    
    cout << "rentepercentage?  ";
    cin >> rate;
    
    cout << "hoeveel dagen blijft dit vaststaan? ";
    cin >> time;
    
    double rente = principal * rate/100 * time/365;
    double totaalEind = principal + rente;
    
    //double totaalEind = principal * (1+pow(rate/100, time)); //totaalbedrag = inleg + rente, rente = inleg*percentage^tijd
    
    cout << "De rente bedraagt " << rente << endl
    << "het totaalbedrag is " << totaalEind << endl;
    
     return (0);       
}
        