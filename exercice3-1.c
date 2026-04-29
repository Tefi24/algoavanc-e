#include <stdio.h>
long long factorielle(int n){
if(n==0)
    return 1;
    else
        return n*factorielle(n-1);
}
int main(){
int n=4;
printf("factorielle de 4 equivaut a:%lld\n",factorielle(n));
return 0;
}
