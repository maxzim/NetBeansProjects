#include <iostream>

using namespace std;

int main (){
    
    int centenTotaal, centen, daalders, guldens, kwartjes, dubbeltjes, stuivers; // definieren van variabelen
    
    cout << "Hoeveel cent is het totaal? ";
    cin >> centenTotaal; //input totaal aantal centen door gebruiker
            
    daalders = centenTotaal/250;
    centen = centenTotaal - daalders*250;
    
    guldens = centen/100;
    centen = centen - guldens*100;
    
    kwartjes = centen/25;
    centen = centen - kwartjes*25;
    
    dubbeltjes = centen/10;
    centen = centen - dubbeltjes*10;
    
    stuivers = centen/5;
    centen = centen - stuivers*5;
    
    cout << "Het totaal is " << centenTotaal << " cent. \n";
    
    cout << "dit komt overeen met "
            << daalders <<" daalders, "
            << guldens << " guldens, "
            << kwartjes << " kwartjes, "
            << dubbeltjes << " dubbeltjes, "
            << stuivers << " stuivers en "
            << centen << " cent. \n\n";
   
    
    return 0;
           
}