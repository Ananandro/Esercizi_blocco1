#include <iostream>

using namespace std;


int putenzah(int base, int esp){

    int z = base;

    if(esp == 0) base = 1;
   
    while (esp > 1){

       base *= z;
       
       esp--;
    }

    return base;
}


int main(){

    int result = 0;
    int x, y;

    cout << "Bella FRATM, dammi due numeri ed io ti faccio la potenza ;)" << endl << "Inserisci la base: ";
    cin >> x;
    cout << "Ed ora inserisci un esponente: ";
    cin >> y;

    result = putenzah(x, y);

    cout << "Il risultato e': " << result;

    return 0;

}