#include <stdio.h>
#include <string.h>
static int factorial (int n)
{
    return (n < 2) ? 1 : n * factorial (n - 1);
}
int main(void) {
    char i;
    int mas[10]={0};
    int kol=0;
    int m=0;
    int mas1[1000];
    while(1){
        scanf("%c",&i);
        if(i=='\n'){
            break;
        }
        m=i-'0';
        if(mas[m]<3) {
            mas[m]++;
        }

    }

    int sum=0;
    int rez1=0;
    int rez2=0;
    int rez3=0;

int num=0;
int pos=0;
for(int i=1;i<10;i++){
    if(mas[i]>0){
        mas[i]--;
    }
    else{
        break;
    }
    for(int i1=0;i1<10;i1++){
        if(mas[i1]>0){
            mas[i1]--;
        } else{
            break;
        }
        for(int i2=0;i2<10;i2++){
            if(mas[i2]>0){
                mas[i2]--;
            }else{
                break;
            }
            num=i*100+i1*10+i2;
            mas1[pos]=num;
            pos++;
        }
    }


}
  

    return 0;
}

