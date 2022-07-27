#include <iostream>

using namespace std;

class Estoque{
private:

    int quantProduto = 0;

public:

    setentrada(){
    cout << "quantos produtos: ";
    int quant;
    cin >> quant;
    this->quantProduto += quant;
    }

    setsaida(){
    cout << "quantos produtos: ";
    int quant;
    cin >> quant;
    this->quantProduto -= quant;
    }
};


int main()
{
Estoque Doce;
Estoque Salgado;
Estoque Bebida;
int a = 3;
while(a != 0){

    cout << "Digite 1 para entrada 2 para saida: ";
    cin >> a;
    switch (a){
    case 1:
    cout << "Digite: 1_Doce 2_Salgado 3_Bebida";
    cin >> a;
    switch (a){
    case 1:
        Doce.setentrada();
    break;
    case 2:
        Salgado.setentrada();
    break;
    case 3:
        Bebida.setentrada();
    break;
    }
    break;
    case 2:
    switch (a){
    case 1:
        Doce.setsaida();
    break;
    case 2:
        Salgado.setsaida();
    break;
    case 3:
        Bebida.setsaida();
    break;
    }
    break;
    }
}



    return 0;
}
