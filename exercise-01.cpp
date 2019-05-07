/*
Nama		: Salma Alifia Shafira
NPM			: 140810180058
Kelas		: B
Tanggal		: 07/05/2019
Exercise	: Reversing a Word Stack-Array
*/

#include<iostream>
using namespace std;

const int maxElemen = 255;
struct Stack{
    char isi[maxElemen];
    int Top;
};
Stack S;

void createStack(Stack& S){
    S.Top = -1;
}

void push(Stack& S, char elemenBaru){
    if (S.Top == maxElemen - 1){
        cout << "Tumpukan Penuh" << endl;
    }
    else {
        S.Top++;
        S.isi[S.Top] = elemenBaru;
    }
}

void pop(Stack& S, char& elemenHls){
    if (S.Top < 0){
        cout << "Tumpukan Kosong" << endl;
    }
    else {
        elemenHls = S.isi[S.Top];
        S.Top--;
    }
}

void print(Stack S){
    char temp;
    while(S.Top != -1){
        pop(S,temp);
        cout << temp;
    }
}

int main(){
    Stack S;
    int n;
    char data;

    createStack(S);

    cout << "Banyak Huruf : "; cin >> n;
    for (int i = 0; i<n; i++){
        cout << "Masukan 1 Huruf: "; cin >> data;
        push(S, data);
    }
    
    cout << "==================\n"<<"REVERSE KATA\n"<<"==================\n";
    print(S);
}
