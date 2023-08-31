#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void){
    cout<<"a)" << endl
    << "Menor valor em float: "<<numeric_limits<float>::lowest() << endl
    << "Maior valor em float: "<<numeric_limits<float>::max() <<endl;

    float pif = M_PI;
    double pid = M_PI;
    
    cout<<"b)"<< endl
    << setprecision(50) << pif << endl
    << setprecision(50) << pid << endl;
    
    cout<<"c)"<< endl
    <<"Pi: 3.14"<<endl
    <<"pif 2: "<< setprecision(3) << pif << endl
    <<"pid 2: "<< setprecision(3) << pid << endl
    <<"Pi: 3.1415"<<endl
    <<"pif 4: "<< setprecision(5) << pif << endl
    <<"pid 4: "<< setprecision(5) << pid << endl
    <<"Pi: 3.14159265"<<endl
    <<"pif 8: "<< setprecision(9) << pif << endl
    <<"pid 8: "<< setprecision(9) << pid << endl
    <<"Pi: 3.1415926535897932"<<endl
    <<"pif 16: "<<setprecision(17) << pif << endl
    <<"pid 16: "<<setprecision(17) << pid << endl
    <<"Pid manteve uma precisao melhor. "<< endl<< endl;

    cout<<"f)" << endl
    << "Menor valor em double: "<<numeric_limits<double>::lowest() << endl
    << "Maior valor em double: "<<numeric_limits<double>::max() <<endl
    << "Menor valor em long double: "<<numeric_limits<long double>::lowest() << endl
    << "Maior valor em long double: "<<numeric_limits<long double>::max() <<endl
    << "O tipo long double e o tipo de ponto flutuante com maior precisao."<<endl;

    cout<<"--------------------" << endl;
    string ch1, ch2, ch3;
    string chMaiusculas ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string chMinusculas ="abcdefghijklmnopqrstuvwxyz";
    string chDigito ="0123456789";
    cout<<"Digite um caractere:";
    cin>>ch1;
    bool encontrouMaiusculo = false;
    bool encontrouMinusculo = false;
    bool encontrouDigito = false;
    for (int i = 0; i < 26; i++)
    {
        encontrouMaiusculo = (ch1 == chMaiusculas.substr(i, 1)) ? true : false;
        if (encontrouMaiusculo)
        {
            break;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        encontrouMinusculo = (ch1 == chMinusculas.substr(i, 1)) ? true : false;
        if (encontrouMinusculo)
        {
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        encontrouDigito = (ch1 == chDigito.substr(i, 1)) ? true : false;
        if (encontrouDigito)
        {
            break;
        }
    }
    string seuCaracter = "Outro tipo";
    if(encontrouMaiusculo)
    {
       seuCaracter="Maiusculo";
    }else if (encontrouMinusculo)
    {
        seuCaracter="Minusculo";
    }else if (encontrouMinusculo)
    {
        seuCaracter="Minusculo";
    }
    // int num1, num2, res=0, i=0, s, s1=1, s2=1;
    // cout << "Digite o primeiro numero: ";
    // cin >> num1;
    // cout << "Digite o segundo numero: ";
    // cin >> num2;
    // if (num1 < 0){
    //     num1 = -num1;
    //     s1 = -1;
    // }
    // if (num2 < 0){
    //     num2 = -num2;
    //     s2 = -1;
    // }
    // s = s1 * s2;
    // while(i < num2){
    //     res += num1;
    //     i++;
    // }
    // cout << "Resultado " << res*s << endl;
    return 0;
}   
    

    


//}