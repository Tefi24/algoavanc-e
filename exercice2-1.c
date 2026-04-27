#include <stdio.h>
long long puissance_lineaire_iterative(long long a,int n){
long long resultat=1;
int i=0;
while(i<n){
    resultat*=a;
    i++;
}
return resultat;
}
int main(){
printf("%lld",puissance_lineaire_iterative(4,5));
 return 0;
}
