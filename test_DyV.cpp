#include <iostream>
#include <string>
#include <vector>
#include "DyV.h"
using namespace std;

int main(){

        vector<int> vint{15, 20, 25, 30, 35, 40, 45, 50};
        vector<char> vchar{'f','e', 'd', 'c', 'b', 'a'};
        vector<double>vdoub{3.14, 4.23, 4.25, 5.3, 15.5, 16.67};
        int ini = 0;
        int fin_int = 8;
        int fin_char = 6;
        int fin_double = 6;
        int x_int = 3;
        char x_char = 'a';
        double x_doub = 6.25;
        int search_int = BusquedaBinaria<int>(x_int, vint, ini, fin_int);
        int search_char = BusquedaBinaria_INV<char>(x_char, vchar, ini, fin_char);
        int search_doub = BusquedaBinaria<double>(x_doub, vdoub, ini, fin_double);

        if(search_int!=-1){
                cout<<"El valor "<<x_int<<" se encuentra en la posicion "<<search_int<<endl;
        }else{
		cout<<"El valor "<<x_int<<" no se encuentra en el vector "<<endl;
        }

         if(search_char!=-1){
                cout<<"El valor "<<x_char<<" se encuentra en la posicion "<<search_char<<endl;
        }else{
                cout<<"El valor "<<x_char<<" no se encuentra en el vector "<<endl;
        }

         if(search_doub!=-1){
                cout<<"El valor "<<x_doub<<" se encuentra en la posicion "<<search_doub<<endl;
        }else{
                cout<<"El valor "<<x_doub<<" no se encuentra en el vector "<<endl;
        }

        return 0;
}

