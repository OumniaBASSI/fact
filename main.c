#include <stdio.h>
#include <stdlib.h>

int fact(int A){
int i,f=1;
for (i=1;i<=A;i++){
    f=f*i;
}

return f;
}

int main()
{
    int i,r;
    printf("calcul de factorielle\n");
    printf("entrer un nombre\n");
    scanf("%d",&r);
    int f=1;
    for(i=1;i<=r;i++){
    f=f*i;
    }

    printf("la factorielle est %d\n",f);
    printf("la factorielle %d \n",fact(r));


    return 0;
}
