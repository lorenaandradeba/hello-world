#include <iostream>
#include <iomanip> // Incluir a biblioteca para manipulação de formato
using namespace std;
int main(){
       
/*a.Imprima na tela, utilizando cout, cada um dos caracteres numéricos e seu correspondente código numérico. 
Como modificar o comportamento do cout para imprimir um objeto de tipo char como caractere e como número?*/
    cout <<"a)"<<endl;
    cout << "'0' = " << int('0') << endl;
    cout << "'1' = " << int('1') << endl;
    cout << "'2' = " << int('2') << endl;
    cout << "'3' = " << int('3') << endl;
    cout << "'4' = " << int('4') << endl;
    cout << "'5' = " << int('5') << endl;
    cout << "'6' = " << int('6') << endl;
    cout << "'7' = " << int('7') << endl;
    cout << "'8' = " << int('8') << endl;
    cout << "'9' = " << int('9') << endl << endl;

/*b. Modifique o exercício anterior para que a saída imprima também
o código numérico em octal e em hexadecimal.*/
    cout <<"b)"<<endl;
    cout << "'0' = " << "Decimal: " << int('0') << oct <<  " - Octal: " <<  int('0') << hex <<  " - Hexadecimal: "  <<  int('0') << endl;
    cout << "'1' = " << "Decimal: " << int('1') << oct <<  " - Octal: " <<  int('1') << hex <<  " - Hexadecimal: "  <<  int('1') << endl;
    cout << "'2' = " << "Decimal: " << int('2') << oct <<  " - Octal: " <<  int('2') << hex <<  " - Hexadecimal: "  <<  int('2') << endl;
    cout << "'3' = " << "Decimal: " << int('3') << oct <<  " - Octal: " <<  int('3') << hex <<  " - Hexadecimal: "  <<  int('3') << endl;
    cout << "'4' = " << "Decimal: " << int('4') << oct <<  " - Octal: " <<  int('4') << hex <<  " - Hexadecimal: "  <<  int('4') << endl;
    cout << "'5' = " << "Decimal: " << int('5') << oct <<  " - Octal: " <<  int('5') << hex <<  " - Hexadecimal: "  <<  int('5') << endl;
    cout << "'6' = " << "Decimal: " << int('6') << oct <<  " - Octal: " <<  int('6') << hex <<  " - Hexadecimal: "  <<  int('6') << endl;
    cout << "'7' = " << "Decimal: " << int('7') << oct <<  " - Octal: " <<  int('7') << hex <<  " - Hexadecimal: "  <<  int('7') << endl;
    cout << "'8' = " << "Decimal: " << int('8') << oct <<  " - Octal: " <<  int('8') << hex <<  " - Hexadecimal: "  <<  int('8') << endl;
    cout << "'9' = " << "Decimal: " << int('9') << oct <<  " - Octal: " <<  int('9') << hex <<  " - Hexadecimal: "  <<  int('9') << endl << endl;

/*c. Acrescente ao código do exercício anterior a possibilidade de ler um
caractere qualquer e imprima no mesmo formato do inciso anterior.*/

    cout <<"c)"<<endl;
    char caracter;
    cout << "Digite um caracter: ";
    cin >> caracter;
    cout << caracter<<" = "
    << "Decimal: " << int(caracter)
    << oct <<  " - Octal: " <<  int(caracter) 
    << hex <<  " - Hexadecimal: " <<  int(caracter) << endl << endl;

/*d. Pesquise como fazer para armazenar uma variável os caracteres
especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um
exemplo que demonstra como usar este recurso.*/
    cout <<"d)"<<endl;
    char cedilha = 135;
    char till = 198;
    cout << "'"<< cedilha << "' = " << "Decimal: " << int(cedilha) << oct <<  " - Octal: " <<  int(cedilha) << hex <<  " - Hexadecimal: "  <<  int(cedilha) << endl;
    cout << "'"<< till << "' = " << "Decimal: " << int(till) << oct <<  " - Octal: " <<  int(till) << hex <<  " - Hexadecimal: "  <<  int(till) << endl;
    return 0;
    }