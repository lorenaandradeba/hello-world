#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main(void){
   vector<string> vec;
    vec.push_back("Zangado");
    vec.push_back("Atchim");
    vec.push_back("Mestre");
    vec.push_back("Soneca");
    vec.push_back("Dunga");
    vec.push_back("Feliz");
    vec.push_back("Dengoso");
    for (auto x = vec.begin(); x != vec.end(); x++)
    {
        cout<<*x<<endl;
    }
    
    cout<<"-----------------------"<<endl;
    vector<string>::iterator it;
    it = vec.begin();
    advance(it, 5);
    *it = "Branca";

    for (auto x = vec.begin(); x != vec.end(); x++)
    {
        cout<<*x<<endl;
    }
return 0;
}