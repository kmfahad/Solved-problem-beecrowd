#include<cstdio>
int main(){
    int a, b, a1, b1;
    float c,c1;
    scanf("%d%d%f%d%d%f",&a, &b, &c, &a1, &b1, &c1);
    printf("VALOR A PAGAR: R$ %.2f\n",b*c+b1*c1);
    return 0;
}