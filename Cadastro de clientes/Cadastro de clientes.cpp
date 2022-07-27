#include <iostream>

using namespace std;

class Cadastro {
private:
        string nome[50];
        string cidade[50];
        string email[50];
        int cpf[50];
        int telefone[50];

public:

static int quant;
    void setnome (string nome, int quant){
    this->nome[quant] = nome;
    }
    void setcidade (string cidade, int quant){
    this->cidade[quant] = cidade;
    }
    void setemail (string email, int quant){
    this->email[quant] = email;
    }
    void setcpf (int cpf, int quant){
    this->cpf[quant] = cpf;
    }
    void settelefone (int telefone, int quant){
    this->telefone[quant] = telefone;
    }

static void setquant (){
    quant += 1;
    }

void getclientes(int quant){

cout << endl << "CLIENTES JA CADASTRADOS"<< endl << endl ;

for(int a = 0; a < quant; a++){

cout << this->nome[a]<< endl ;
cout << this->cidade[a]<< endl ;
cout << this->email[a]<< endl ;
cout << this->cpf[a]<< endl ;
cout << this->telefone[a]<< endl << endl ;

}
}

};

int Cadastro::quant = 0;

int main(){

Cadastro dados;
int a = 0;
cout << "CADASTRO DE CLIENTES"<< endl;
do {
cout << endl << "Insira seu nome:  ";
string nome;
cin >> nome;
dados.setnome(nome, dados.quant);

cout << "Insira a cidade:  ";
string cidade;
cin >> cidade;
dados.setcidade(cidade, dados.quant);

cout << "Insira a email:  ";
string email;
cin >> email;
dados.setemail(email, dados.quant);

cout << "Insira o cpf:  ";
int cpf;
cin >> cpf;
dados.setcpf(cpf, dados.quant);

cout << "Insira o telefone:  ";
int telefone;
cin >> telefone;
dados.settelefone(telefone, dados.quant);

dados.setquant();

cout << endl << "Digite 0 para continuar cadastros: ";
cin >> a;
}while(a == 0);

dados.getclientes(dados.quant);


return 0;
}
