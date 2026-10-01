#include <iostream>
#include <windows.h>

using namespace std;

int soma(int a, int b){
    int soma = a + b;
    return soma;
}

/*int main(){

    int a, b;

    cout << "digite o primeiro numeros: " << endl;
    cin >> a;

    cout << "digite o segundo numero: " << endl;
    cin >> b;

    cout << "resultado:" << soma(a, b);
}
*/


int main(){
  
    int x, y;
    cout << "digite os numeros: " << endl;
    cin >> x;
    cout << "digite os numeros: " << endl;
    cin >> y;
    int z = soma(x, y);

    cout << "a soma de: " << x << "+" << y << "= " << z;
}