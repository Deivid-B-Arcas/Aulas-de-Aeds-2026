#include <iostream>
using namespace std;

int main(){
   float altura[3], media = 0;

   for(int i = 0; i < 3; i++){
    cout << "Coloque a altura do atleta numero: " << i + 1 << " " << endl;
    cin >> altura[i];
    media = media + altura[i];
   }
   for(int i = 0; i < 3; i++){
    if(altura[i] > media/3){
    cout << altura[i] << " ";
     }
   }
}
