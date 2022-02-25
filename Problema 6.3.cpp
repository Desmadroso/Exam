#include <iostream.h>
using namespace std;
/* la media de cada alumno,materia,y grupo general*/
int grupo=0,alumno[,5],prommat[5]=0,promalum[];
for (i=0;i<n;i++){
	for(j=0;j<5;j++){
		grupo=grupo+alumno[i,j]; //promedio grupal
		prommat[j]= alumno[i,j];//promedio materia
		promalum[j]=alumno[i,j];//promedio alumno	
	}
}
grupo= grupo/n;//promedio grupal
for (j=0;j<5;j++){
	prommat[j]=prommat[j]/n;//promedio materia
}
for (i=0;i<n;i++){
promalum[i]= promalum[i]/5;//promedio alumno
}
int aux=0;
//ordenamiento shell

int incremento;
    
    incremento=n/2;
    
    while(incremento>0){
        for(i=incremento+1;i<=n;i++){
            j=i-incremento;
            while(j>0){
                if(promalum[j]>=promalum[j+incremento]){
                    aux = alumno[j];
                    promalum[j] = promalum[j+incremento];
                    promalum[j+incremento] = aux;
                }
                else{
                        j=0;
                    }
                j=j-incremento;
            }
        }
        incremento=incremento/2;
    }
}
for(i=0;i<n;i++)
    cout<<"Promedios generales ordenados : "<<promalum[i]<<endl;
