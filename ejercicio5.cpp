#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, delta, x1, x2;
    cout<<"Ingrese los valores de a, b y c separados por espacio (ax^2+bx+c):\n";
    cin>>a>>b>>c;
    delta=(b*b-4*a*c);


    if (a==0 and b==0) {
        cout<<"No tiene solucion\n";
    } else if (a==0) {
        cout<<"x = "<<-c/b<<"\n";
    } else if (delta<0){
        cout<<"No tiene solucion\n";
    } else {
        x1=(-b+(sqrt(delta)))/(2*a);
        x2=(-b-(sqrt(delta)))/(2*a);
        cout<<"x1 = "<<x1<<", x2 = "<<x2<<"\n";
    }
    return 0;
}
