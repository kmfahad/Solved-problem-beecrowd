#include<cstdio>
#include<cmath>
int main(){
    double x,x1,y,y1;
    scanf("%lf%lf%lf%lf",&x,&y,&x1,&y1);
    double d = sqrt((x1 - x)*(x1 - x)+ (y1 - y)*(y1 - y));
    printf("%.4f\n",d);
    return 0;
}