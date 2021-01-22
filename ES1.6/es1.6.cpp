#include <iostream>
#include <math.h>


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



float factRec(int y){

    float res = 0;

    for(int i=0; i<=y; i++){

        res += (1 / float(fact(i)));
    }

    return res;
}




int main(){

    int num;

    cout << "Inserire numero di fondo per calcolo della costante di Eulero: ";
    cin >> num;


    if(num <= 16){
        cout << "Il numero ottenuto usando come limite di calcolo il numero inserito e': " << factRec(num) << endl;
    }
    else{
        cout << "Inserire un numero <= 16." << endl;
    }

    return 0;
}