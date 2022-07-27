#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int golTime1 = 0;
int golTime2 = 0;
int a = 0;
clock_t tempo;
float segundo, minuto;
string anotacao;

class Jogo{
public:
    string time1,time2;
    string data;
    string horario;
    string estadio;

    void placar(string time1, string time2, int goltime1, int goltime2, int minuto, int segundo) {
    cout << "---------------------------------------" << endl;
    cout << "Placar: " << time1 << " " << goltime1 << " x "<< goltime2 << " " << time2 << endl;
    cout << "Tempo: " << minuto << ":" << segundo << endl;
    cout << "---------------------------------------" << endl;
    }
};


class Juiz {
public:
    string nome;

/*    int marcar(string anotar){
    int g1,g2,f1,f2,ca1,ca2,cv1,cv2;
    switch (anotar){
    case "g1":
    }

    }*/

void marcar () {

    tempo = clock();
    while (minuto < 10 ){
    minuto = (clock() - tempo)/1000;
    segundo = (clock()%1000)/10;

} }
};

int main(){
Jogo jogo1;
Juiz juiz1;
    cout << "Nome do time da casa:   ";
        cin >> jogo1.time1;
    cout << "Nome do time de fora:   ";
        cin >> jogo1.time2;
    cout << "Nome do estadio:   ";
        cin >> jogo1.estadio;
    cout << "Data do jogo:   ";
        cin >> jogo1.data;
    cout << "Horario do jogo:   ";
        cin >> jogo1.horario;

while (a != 1){
        cout << "Um para iniciar a partida.  ";
    cin >> a;
}
juiz1.marcar();
jogo1.placar(jogo1.time1, jogo1.time2, golTime1, golTime2, minuto, segundo);


    return 0;
}
