#include <iostream>
using namespace std;

int main(){

  float vetor[10];

  for(int i = 0; i < 10; i++){
      cout << "Insira o numero na posicao " << i;
      cin >> vetor[i];
      vetor[i] = vetor[i] /2;
  }
  for(int i = 0; i < 10; i++){
    cout << vetor[i] << " ";

  }
}
