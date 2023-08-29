#include <iostream>
using namespace std;
int main(void){
    char letra ='a';
    cout<<"A letra \'"<< letra <<"\' correspondende ao valor "<< letra << endl;
    cout<<"O tipo char ocupa "<< sizeof(char)  <<" bytes na memória. " << endl;
    letra=-120;
    cout<<"E pode armazenar valores negativos ("<< int(letra) <<") ";
    letra=120;
    cout<<"e positivos ("<< int(letra)<<")." << endl;
    unsigned char letra2=120;
    signed char letra3=-120;
    cout<<"O tipo unsigned char ocupa "<< sizeof(letra2)  <<" bytes na memória. " << endl;
    cout<<"O tipo signed char ocupa "<< sizeof(letra3)  <<" bytes na memória. " << endl;
    wchar_t letra4 = L'ç';
    cout<<"O tipo wchar_t \'"<< letra4 <<"\' ocupa "<< sizeof(letra4)  <<" bytes na memória. " << endl;
    char16_t letra5 = L'ç';
    cout<<"O tipo char16_t \'"<< letra5 <<"\' ocupa "<< sizeof(letra5)  <<" bytes na memória. " << endl;
    char32_t letra6 = L'ç';
    cout<<"O tipo char32_t \'"<< letra6 <<"\' ocupa "<< sizeof(letra6)  <<" bytes na memória. " << endl;
    return 0;
}