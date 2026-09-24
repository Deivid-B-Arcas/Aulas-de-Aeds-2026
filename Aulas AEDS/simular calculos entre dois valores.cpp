#include <iostream>
using namespace std;

int main()
{

    float a, b;

    cout << "Digite os dois numeros: " << endl;
    cin >> a;
    cin >> b;

    char operador;

    cout << "Digite o operador desejado: " << endl;
    cin >> operador;
    
    while (true){     
    
    switch (operador){
    case '/':
    cout << a / b;
        break;
    cout << a * b;
    case '*':
        break;
    cout << a + b;    
    case '+':
        break;    

    case '-':
        break;   
    cout << a - b;     

    default:
        break;
    }
  }
}