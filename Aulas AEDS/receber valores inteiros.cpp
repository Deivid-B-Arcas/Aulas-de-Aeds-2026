#include <iostream>
#include <windows.h>
 
using namespace std;
 
// recebe valores e mostra o maior

int main() {
  int valor[4];
  
  for (int i = 0; i < 4; i++){
    valor[i] = i;
    cout << "digite os valores: " << endl;
    cin >> valor[i];
  }
  
   if (valor[0] >= valor[1] && valor[0] >= valor[2] && valor[0] >= valor[3]){
    cout << "o numero maior e: " <<  valor[0] << endl;
   }
   if (valor[1] >= valor[0] && valor[1] >= valor[2] && valor[1] >= valor[3]){
    cout << "o numero maior e: " <<  valor[1] << endl;
   }
   if (valor[2] >= valor[1] && valor[2] >= valor[0] && valor[2] >= valor[3]){
    cout << "o numero maior e: " << valor[2] << endl;
   }
   if (valor[3] >= valor[1] && valor[3] >= valor[2] && valor[3] >= valor[0]){
    cout << "o numero maior e: " << valor[3] << endl;
   }
  
  

 
 
  cout << endl << endl;
  return 0;
}