#include <iostream>
#include "lista_estatica.h"
#include <iostream>
using namespace std;



int main(){
    int c,c1,c2,d,d1,d2;
    cout<<"digite os dados do primeiro polinomio: \n";


    cin>>c>>c1>>c2;
    cout<<"digite os dados do segundo polinomio: \n";
    cin>>d>>d1>>d2;
    Polinomio a, b;
    ListaEst poli1, poli2;
    inicializarL_EST(poli1);
    inicializarL_EST(poli2);
    a.inteiroexp=c, a.expoente=c1, a.inteiro=c2;
    inserirInicioL_EST(poli1, a);
    b.inteiroexp=d; b.expoente=d1, b.inteiro=d2;
    inserirFimL_EST(poli2, b);
    imprimirL_EST(poli1);
    imprimirL_EST(poli2);

    }
