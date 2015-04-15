#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente{
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
     int eta;
    char classe[MAX_STRLEN];
};

typedef struct s_studente studente;

void Ordinamentopercognome(studente v[],int n);

int main(int argc, char** argv) {
    int i;
    studente v[N];
    
    for(i=0;i<N;i++)
    {
        printf("inserisci il nome: ");
        scanf("%s", v[i].nome);
        printf("inserisci il cognome: ");
        scanf("%s", v[i].cognome);
        printf("inserisci l'eta': ");
        scanf("%d", &v[i].eta);
        printf("inserisci la classe: ");
        scanf("%s", v[i].classe);
       
    }
    
        Ordinamentopercognome (v,N);
    
    for(i=0;i<N;i++)
    {
      printf("%s; %s; %d; %s\n",v[i].nome,v[i].cognome,v[i].eta,v[i].classe);
    }
    
    return (EXIT_SUCCESS);
}

void Ordinamentopercognome(studente v[], int n)
{
    int i, j, min;
    studente temp;
    
    for(i=0; i<n-1; i++)
    {
     min=i;
        for(j=i+1; j<n; j++)
        {
            if(strcmp(v[j].cognome,v[min].cognome)<0)
            {        
                min=j;
            }
        
            temp=v[i];
            v[i]=v[min];
            v[min]=temp;
        }
        
    }
    
}
