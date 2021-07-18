#include <iostream>
using namespace std;
int main()
{
    char b[10]={0,0,0,0,0,0,0,0,0,0};
    char r;
    int cad;
    int i;
    do{
        system("cls");
        for(i=1; i<10; i++){
        if(b[i]==0){
            cout << "[B" << i << "]";
        }else{
            cout << "[--]";
         }
        }
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Reservar a cadeira: B";
    cin >> cad;
    if (b[cad]==0){
        b[cad]=1;
        cout << "Cadeira B" << cad << " reservada";
    }else{
        cout << "Erro: Lugar reservado!";
    }
    cout << endl;
    cout << "Quer reservar outro? [s/n] ";
    cin >> r;
    }while(r=='s');
    return 0;
}
