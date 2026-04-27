#include<stdio.h>
long long puissance_rapide_iterative(long long a,int n){
long long resultat=1;
while(n>0){
    if(n%2==1){
        resultat*=a;
    }
    a*=a;
    n/=2;
}
return resultat;
}
int main(){
printf("%lld\n",puissance_rapide_iterative(4,3));
return 0;
}
