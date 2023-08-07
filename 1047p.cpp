#include<cstdio>

int main(){
    
    int hs, ms, hf, mf;
    scanf("%d%d%d%d",&hs, &ms, &hf, &mf);
    
    if(hs >= 0 && hs <= 24){
        if(hf >= 0 && hf <= 24){
            int h, m;
            if(hs >= hf && ms > mf){
                h = 24 - hs +hf;
                m = 60 - ms + mf;
                h--;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
            }
            else if(hs >= hf && ms < mf){
                h = 24 - hs + hf;
                m = mf - ms;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
            }
            else if (hs <= hf && ms > mf){
                h = hf - hs;
                m = mf - ms;
                h--;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
            }
            else{
                h = hf - hs;
                m = 60 - ms + mf;
                h--;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
            }
        }
    }

    return 0;
}