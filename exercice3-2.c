#include<stdio.h>
long long factorielle_iterative(int n){
long long res=1;
int i=2;
while (i<=n){
    res*=i;
    i++;
}
return res;
}
int main(){
int n=6;
printf("factorielle de 6 en iterative est:%lld\n",factorielle_iterative(n));
return 0;
}
