#include <iostream>
#include <iomanip>

using namespace std;

class Media {
private:
    int num, soma = 0, quant;
    float result;
public:
    void setcalcularmedia(){
    cout << "Quantos numeros deseja digitar: ";
    cin >> this->quant;
    for (int a = 0; a < this->quant; a++){
    cin >> this->num;
    this->soma += this->num;
    }
    this->result = this->soma/this->quant;
    std::cout << std::fixed << std::setprecision(2)<< "A media e: " << this->result;
    }

};
int main()
{
Media media;
media.setcalcularmedia();
    return 0;
}

