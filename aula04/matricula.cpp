#include <iostream>
using namespace std;
int main(void){
    char continuar=1;
    float nota1, nota2, nota3, media;
    int indiceAluno = 0;
    float alunos[40][4];
    //string matricula[40];
 do
 {
    //matricula[indiceAluno] = "2023.T01." + indiceAluno;
    cout<<"Digite a matricula do aluno:"<<endl;
    cin>>alunos[indiceAluno][0];
    cout<<"Digite a nota 1:"<<endl;
    cin>>alunos[indiceAluno][1];
    cout<<"Digite a nota 2:"<<endl;
    cin>>alunos[indiceAluno][2];
    cout<<"Digite a nota 3:"<<endl;
    cin>>alunos[indiceAluno][3];
    
    indiceAluno++;
    cout<<"Deseja continuar s para sim"<<endl;
    cin>>continuar;
    if (continuar != 's')
        break;

 } while (continuar == 's');
 
 cout<<"MATRICULA"<<"\t"<<"NOTA1"<<"\t"<<"NOTA2"<<"\t"<<"NOTA3"<<"\t"<<"MEDIA"<<endl;
 cout<<"====================================================================="<<endl;
 for (int i = 0; i < indiceAluno; i++)
 {
    nota1 = alunos[i][0];
    nota2 = alunos[i][1];
    nota3 = alunos[i][2];
    media = ((nota1+nota2+nota3)/3);
    cout<<"2023."+i<<"\t\t"<<nota1<<"\t"<<nota2<<"\t"<<nota3<<"\t"<<media<<endl;
 }
 
    
return 0;
}