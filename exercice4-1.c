#include <stdio.h>
int nb_chiffres_rec(int n){
if(n==0)
    return 0;
    return 1+nb_chiffres_rec(n/10);
}
int main(){
int n=159;
printf("le nombre de chiffre est de:%u\n",nb_chiffres_rec(n));
return 0;
}
