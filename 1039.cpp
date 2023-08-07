#include<bits/stdc++.h>
using namespace std;
int main(){
    float N1, N2, N3, N4;
    cin>>N1>>N2>>N3>>N4;
    float average = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
    cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
    if(average >= 7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(average < 5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else if(average >= 5.0 && average <= 6.9){
        cout<<"Aluno em exame."<<endl;
        float N5;
        cout<<"Nota do exame: ";
        cin>>N5;
        float average2 = (average+N5)/2;
        if(average2 >= 5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        if(average2 <= 4.9){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<average2<<endl;
    }

    return 0;
}