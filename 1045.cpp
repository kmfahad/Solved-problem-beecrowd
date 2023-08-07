#include<bits/stdc++.h>
using namespace std;
int main(){
    double A, B, C;
    cin>>A>>B>>C;
    double ar[3];
    ar[0] = A;
    ar[1] = B;
    ar[2] = C;
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(ar[i] < ar[j]){
                swap(ar[i],ar[j]);
            }
        }
    }
    A = ar[0];
    B = ar[1];
    C = ar[2];

    if(A >= B+C){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }

    else if(A*A == B*B + C*C){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }

    else if(A*A > B*B + C*C){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(B == C){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }

    else if(A*A < B*B + C*C){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(A == B && B == C){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        else if(A == B || B == C){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }
    return 0;
}