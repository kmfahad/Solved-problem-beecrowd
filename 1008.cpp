#include<bits/stdc++.h>
using namespace std;
int main(){
    int employee_number, work_per_month;
    float salary;
    cin>>employee_number>>work_per_month>>salary;
    cout<<"NUMBER = "<<employee_number<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<work_per_month*salary<<endl;
    return 0;
}