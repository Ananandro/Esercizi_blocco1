#include <iostream>


using namespace std;


int fact(int x){

    if(x == 0) return 1;

    if(x != 0){

        for(int i=(x-1); i >= 1; i--){

            x *= i;
        }

    }

    return x;
}




int main(){

    int num;

    cout << "Inserisci un numero >= 0 e ne calcolero' il fattoriale: ";
    cin >> num;

    if(num <= 16){

        cout << "Il risultato e': " << fact(num) << endl;
    }

    else{
        cout << "Il numero da te inserito e' troppo grande" << endl;
    }
    
    return 0;
}