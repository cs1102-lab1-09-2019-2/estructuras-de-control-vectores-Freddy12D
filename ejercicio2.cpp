#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <bits/unordered_map.h>
using namespace std;
int moda(vector<int> &lista);
vector <int> leerConsola();
vector <int> leerConsola() {
    vector <int> lista;
    int num;
    cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
    while (true){
        cin>>num;
        if (num<0){
            break;
        }
        lista.push_back(num);
    }
    return lista;
}

int moda(vector<int> &lista) {
    unordered_map<int, int> map;
    for (int i =0; i<lista.size(); i++){
        map[lista[i]]++;
    }
    int moda, max=-10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
}
int main(){
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
