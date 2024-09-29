#include <stdio.h>

int main(){
    int gg1,gg2,mm1,mm2,aa1,aa2;
    printf("Inserisci la prima data[GG/MM/AA]: ");
    scanf("%d",&gg1);
    scanf("%d",&mm1);
    scanf("%d",&aa1);
    printf("Inserisci la prima data[GG/MM/AA]: ");;
    scanf("%d",&gg2);
    scanf("%d",&mm2);
    scanf("%d",&aa2);
    if(aa1<aa2){
        printf("La prima data è più recente");
    }else if(mm1<mm2){printf("La prima data è più recente");}
    else if(aa1<aa2){printf("La prima data è più recente");}
    else{printf("La seconda data è più recente");}
    return 0;
}
