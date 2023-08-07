#include<cstdio>
#include<cmath>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d = (b*b) - (4*a*c);
    if(d > 0 && a != 0){
        d = sqrt(d);
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-b + d)/(2*a),(-b - d)/(2*a));
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}