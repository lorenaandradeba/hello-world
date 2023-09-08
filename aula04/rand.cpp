#include <iostream>
using namespace std;
int main(void){
    int tentativas=0;
    string numero = "";
    bool acertou = false;
    int v1 = 0;  
    int numeroI=0;
    //srand (time(NULL));

    v1 = rand() % 100 + 1;
    cout<<"Digite um numero entre 0 e 100"<<endl;
    do
    {
        cin>>numero;
      
        int numeroI = stoi(numero);   

        if (v1<numeroI){
            cout<<"Meu numero é menor que "<<numero<<endl;
            tentativas++;
        }  else if(v1>numeroI){
            cout<<"Meu numero é maior que "<<numero<<endl;
            tentativas++;
        } else{
            cout<<"Parabens!!! Voce acertou. Você tentou "<<tentativas<<" vezes"<<endl;
            acertou;
            break;
        }
    } while (!acertou);
    
return 0;
}