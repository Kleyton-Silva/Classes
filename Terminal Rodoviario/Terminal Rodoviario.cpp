#include <iostream>
#include <vector>

using namespace std;

class Guiche {
public:
    string destino[3];
    string horarioSaida[3];
    string horarioChegada[3];
    float precoPassagem [3];
    float totalVendido = 0;

    void vender (string *destino, string *horarioSaida, string *horarioChegada, float *precoPassagem, float *totalVendido, bool *saida, int *poltrona, string *nome){
    int j;
    for(int i=0; i < 3; i++ ){
    cout << "----------------------------------------------------" << endl;
    cout << "_" << i+1 << "_" << destino[i] << "   saida: ";
    cout << horarioSaida[i] << "   chegada: ";
    cout << horarioChegada[i] << "   preco: ";
    cout << precoPassagem[i] << endl;
    cout << "----------------------------------------------------" << endl;
    }
    cout << "Escolha uma opcao: ";
    cin >> j;

    switch(j){
    case 1: if (saida[j-1] != 1 && poltrona[j-1] < 4){
        *totalVendido = *totalVendido + precoPassagem[j-1];
        poltrona[0]++;
        cout << endl << endl << endl << "--------PASSAGEM---------" << endl << endl;
        cout << "Destino : " << destino[j-1] << endl;
        cout << "Horario Saida : " << horarioSaida[j-1] << endl;
        cout << "Numero da poltrona : " << poltrona[j-1] << endl;
        cout << "Nome do motorista : " << nome[j-1] << endl;
        cout << "-------------------------" << endl << endl << endl;

        } else if (saida[j-1] == 1 && poltrona[j-1] < 4 ) {cout << endl << endl << "-------ESTE ONIBUS JA SAIU-------" << endl << endl << endl;
        } else {cout << endl << endl << "-------ESTE ONIBUS ESTA LOTADO-------" << endl << endl << endl;}
    break;
    case 2: if (saida[j-1] != 1 && poltrona[j-1] < 4){
        *totalVendido = *totalVendido + precoPassagem[j-1];
        poltrona[j-1]++;
        cout << endl << endl << endl << "------PASSAGEM-------" << endl << endl;
        cout<< "Destino : " << destino[j-1] << endl;
        cout<< "Horario Saida : " << horarioSaida[j-1] << endl;
        cout<< "Numero da poltrona : " << poltrona[j-1] << endl;
        cout << "Nome do motorista : " << nome[j-1] << endl;
        cout << "-------------------------" << endl << endl << endl;

        } else if (saida[j-1] == 1 && poltrona[j-1] < 4 ) {cout << endl << endl << "-------ESTE ONIBUS JA SAIU-------" << endl << endl << endl;
        } else {cout << endl << endl << "-------ESTE ONIBUS ESTA LOTADO-------" << endl << endl << endl;}
    break;
    case 3: if (saida[j-1] != 1 && poltrona[j-1] < 4){
        *totalVendido = *totalVendido + precoPassagem[j-1];
        poltrona[j-1]++;
        cout << endl << endl << endl << "------PASSAGEM-------" << endl << endl;
        cout<< "Destino : " << destino[j-1] << endl;
        cout<< "Horario Saida : " << horarioSaida[j-1] << endl;
        cout<< "Numero da poltrona : " << poltrona[j-1] << endl;
        cout << "Nome do motorista : " << nome[j-1] << endl;
        cout << "-------------------------" << endl << endl << endl;

        } else if (saida[j-1] == 1 && poltrona[j-1] < 4 ) {cout << endl << endl << "-------ESTE ONIBUS JA SAIU-------" << endl << endl << endl;
        } else {cout << endl << endl << "-------ESTE ONIBUS ESTA LOTADO-------" << endl << endl << endl;}
    break;
    }
  }

    void registrar (string *destino, string *horarioSaida, string *horarioChegada, float *precoPassagem, string *placa, string *nome, int *cpf){

    for(int i=0; i < 3; i++ ){
    cout << "Destino:  ";
    cin >> destino[i];
    cout << "Horairo de saida:  ";
    cin >> horarioSaida[i];
    cout << "Horairo de chegada:  ";
    cin >> horarioChegada[i];
    cout << "Preco passagem:  ";
    cin >> precoPassagem[i];
    cout << "Informe a placa do onibus: OMG1111 , DDD3333 ou GGG8888" << endl;
    cin >> placa[i];

    if(placa[i] == "OMG1111"){
    nome[i] = "Draven";
    cpf[i] = 1111;
    }else if (placa[i] == "DDD3333"){
    nome[i] = "TylK";
    cpf[i] = 3333;
   }else if (placa[i] == "GGG8888"){
    nome[i] = "Rick";
    cpf[i] = 8888;
   }
  }
 }
};

class Onibus {
public:
    string viacao = "Canelinha";
    string placa[3];
    bool saida[3];
    int poltrona [3];

    void jasaiu (bool *saida, string *destino){
    int i;
    cout << "Qual a destino: ";
    for (i=0; i<3; i++){
    cout << i+1 << "_" << destino[i] << "   ";
    }
    cin >> i;
    saida[i-1] = true;

  }
};

class Motorista {
public:

    string nome[3];
    int cpf [3];

};

int main()
{
Guiche vendedor;
Onibus bus;
Motorista motora;
for (int i = 0; i<3; i++){
    bus.poltrona[i] = 0;
}
int a = 5;
while (a != 0){
cout << "---------------------------------------------------------------" << endl;
cout << "1_ REGISTRAR VIAGENS.  2_ VENDER PASSAGEM.  3_ SAIDA DE ONIBUS." << endl;
cout << "---------------------------------------------------------------" << endl;
cin >> a;
switch(a){
case 1:
    vendedor.registrar(vendedor.destino,vendedor.horarioSaida,vendedor.horarioChegada,vendedor.precoPassagem, bus.placa, motora.nome, motora.cpf);
break;
case 2:
    vendedor.vender(vendedor.destino,vendedor.horarioSaida,vendedor.horarioChegada,vendedor.precoPassagem,&vendedor.totalVendido,bus.saida, bus.poltrona, motora.nome);
break;
case 3:
    bus.jasaiu(bus.saida, vendedor.destino);
    break;
 }
}
cout << "---------------------------------------------------------------" << endl;
cout << "FIM DO DIA." << endl << "Valor vendido em passagens: R$" << vendedor.totalVendido;
cout << "---------------------------------------------------------------" << endl;
return 0;
}
