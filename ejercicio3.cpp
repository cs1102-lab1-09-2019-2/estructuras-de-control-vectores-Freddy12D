#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstddef>
#include <unordered_map>
#include <bits/unordered_map.h>

using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();
vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    vector <int> lista;
    int num;
    cout<<"Ingrese un número positivo, escriba -1 si ya no quiere ingresar más números:\n";
    while(true){
        cin>>num;
        if (num<0){
            break;
        }
        lista.push_back(num);
    }
    return lista;

}

int mediana(vector<int> &lista) {
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2

    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    auto longitud=lista.size();
    int med;
    if (longitud%2==0) {
        med = ((lista[longitud / 2 - 1] + lista[longitud / 2]) / 2);
    } else {
        med = lista[(longitud-1)/2];
    }
    return med;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
