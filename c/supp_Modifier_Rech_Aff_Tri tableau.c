#include <stdio.h>
void rechercher(int T[100], int n, int r) {
    int s ; // Initialiser s à une valeur non valide
    int cop = 0;

    for (int i = 0; i < n; i++) {
        if (r == T[i]) {
            s = T[i];
            cop++;
        }
    }

    if (cop != 0) {
        printf("La valeur est %d et elle apparaît %d fois.\n", s, cop);
    } else {
        printf("La valeur est inconnue.\n");
    }
}
//---------------------------------------------------
void modifier(int T[100], int n, int r,int m) {
    for (int i = 0; i < n; i++) {
        if (T[i] == r) {
           
            T[i] =m;
        }
    }
}
//-------------------------------------------------------
void sup(int T[100], int *n, int s) {
    for (int i = s ; i < *n; i++) {
        T[i - 1] = T[i];
    }
    (*n)--;
}

//------------------------------------------------------
void Affiche(int T[100], int n){
	    for (int i = 0; i < n; i++) {
        printf("%d\n", T[i]);
    }
}
//---------------------------------------------------------
void Tri_Desc(int T[100], int n){
	   int t;
     for(int i=0;i<n;i++){
     	for(int j=i+1;j<n;j++){
     		if(T[i]<T[j]){
     			t=T[i];
     			T[i]=T[j];
     			T[j]=t;
			 }
     		
		 }
	 }
}
//--------------------------------------------------------
static int i,r,m,s,j;
int main() {
    int T[100]; // Tableau de réels (indices de 1 à 100)
    int  n,cop=0;


    
    printf("Donner le nombre de valeurs à remplir : ");
    scanf("%d", &n);

    // Remplissage du tableau
    for (i = 0; i < n; i++) {
        printf("Donner un entier : ");
        scanf("%d", &T[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("%d\n", T[i]);
    }
         printf("\n");
    //Tri 
    Tri_Desc(T,  n);
	    Affiche(T,n);
	    
	    
    //recherche
 printf("Donner un nommbre recherche : ");
        scanf("%d",&r);
   rechercher( T,  n, r);
  
    
	 //modifier
    
    printf("Donner un nommbre mdodifier : ");
        scanf("%d",&m);
        modifier( T,  n,  r, m);
          Affiche(T,n);
          
          
          
          //Suppresion
           printf("Donner un nommbre Supp : ");
        scanf("%d",&s);
sup( T, &n,  s);
     Affiche(T,n);
  
    return 0;
}

