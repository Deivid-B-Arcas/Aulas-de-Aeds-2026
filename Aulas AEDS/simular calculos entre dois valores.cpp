#include <iostream>
using namespace std;

int main(){

    float A, B;

    cout << "Digite os dois numeros: " << endl;
    cin >> A;
  cin >> B;

    char operador;

    cout << "os operadores sao / para divisao, * para multiplicacao, + para adicao e - para subtracao, agora escolha o operador desejado: ";
    cin >> operador;
   
    if (A != 0 && B != 0 ){
        
    switch (operador){
        case '/':
        cout << A / B;
            break;
            
        case '*':
        cout << A * B;
            break;
             
        case '+':
        cout << A + B; 
            break;
        
        case '-':
        cout << A - B;
            break;   
                 
        
            default:
            break;
        }
    } else{
       return 0; 
  }

}