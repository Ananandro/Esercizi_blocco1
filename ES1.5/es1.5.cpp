#include <iostream>

using namespace std;


unsigned long int fatt(unsigned long int num){

    if (num != 0){
        for (unsigned long i= (num-1); i >= 1 ; i--){

            num *= i;
        }
    }
    else num = 1;

    return num;
}





int main (){

    unsigned long int n;

    cout << "Inserisci un numero >= 0 ed io ti calcolero' il suo fattoriale" << endl << "NB: puo' accadere che il risultato sia troppo grande e non ci stia in memoria." << endl;
    cin >> n;
    cout << "Il fattoriale del numero da te inserito e':" << endl << fatt(n);

    return 0;
}