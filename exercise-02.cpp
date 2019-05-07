/*
Nama		: Salma Alifia Shafira
NPM			: 140810180058
Kelas		: B
Tanggal		: 07/05/2019
Exercise	: Reversing a Word Stack-Singly Linked List
*/

#include<iostream>
using namespace std;

const int maxElemen = 255;
struct StackLinked{  
    char isi[maxElemen];
    StackLinked* next;
};

typedef StackLinked* pointer;
typedef pointer Stack;

void createStack(Stack& Top){
    Top = NULL;
}

void createElemen(pointer& pBaru){
    pBaru = new StackLinked;
    cout << "Masukan 1 Huruf: ";
    cin >> pBaru->isi;
    pBaru->next = NULL;
}

void push(Stack& Top, pointer& pBaru){
    if (Top == NULL){
        Top = pBaru;
    }
    else{
        pBaru->next = Top;
        Top = pBaru;
    }
}

void pop(Stack& Top, pointer& pHapus){
    if (Top == NULL){
        cout << "Tumpukkan Kosong" << endl;
    }
    else if (Top->next = NULL){
        pHapus = Top;
        Top = NULL;
    }
    else{
        pHapus = Top;
        Top = Top->next;
        pHapus->next = NULL;
    }
}

void print(Stack Top){
    pointer temp;
    while (Top != NULL){
        temp = Top;
        cout << temp->isi;
        Top = Top->next;
    }
}

int main(){
    Stack S;
    int n;
    pointer a;

    createStack(S);

    cout << "Banyak Huruf : ";
    cin >> n;
    for (int i = 0; i<n; i++){
        createElemen(a);
        push(S,a);
    }
    cout << "==================\n"<<"REVERSE KATA\n"<<"==================\n";
    print(S);
}
