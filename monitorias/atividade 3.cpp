#include <iostream>
using namespace std;

int main(){
 int vetor[100];

 for(int i = 0; i < 100; i++){
    vetor[i] = 2 * i + 1;
 }

for(int i = 0; i < 100; i++){
        cout << vetor[i] << " ";
}

}
