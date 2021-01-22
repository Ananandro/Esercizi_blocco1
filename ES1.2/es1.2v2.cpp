#include <iostream>


using namespace std;




int powint(int base, int rep){

    if(rep == 0) return 1;

    int res = 1;

    if (rep != 0){

        while(rep > 0){

            res *= base;
            rep--;
        }

    }

    return res;
}


int numFinder(int numero, int indice){                      //dato numero ed un indice, da' come risultato la cifra del numero nella posizione specificata dall'indice

    int x = powint(10, (indice-1));

    int risultato = (numero / x) % 10;

    return risultato;

}


int main(){

    int num, ind;

    cout << "Inserisci numero: ";
    cin >> num;
    cout << "Inserisci un indice: ";
    cin >> ind;

    cout << "La cifra del numero inserito corrispondente all'indice e':" << endl << numFinder(num, ind);


    return 0;

}