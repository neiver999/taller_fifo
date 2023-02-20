#include <iostream>
#include <malloc.h>
using namespace std;
/*
    AUTORES  /  semestre 3 Diurno
    
    Jhon Neiver Valencia Grueso
    Jorge Enrique Segura Rodriguez 
    Juan Camilo Angulo Naboyan
*/
struct paciente{
    int val=0;
    char nombre[30];
    paciente *sig;
};

paciente *cab, *aux, *aux2;

int registrar(){
     cout<<"REGISTRADOR DE PACIENTES"<<endl;
     cout<<"--------------------------"<<endl;

    if(cab==NULL){
        cab=(struct paciente*)malloc(sizeof(struct paciente));
        cout<<"Introduzca el documento de paciente: ";
        cin>>cab->val;
        cout<<"Introduzca el nombre de paciente: ";
        cin>>cab->nombre;
        cab->sig = NULL;
    }
    else
        {
            aux = (struct paciente*)malloc(sizeof(struct paciente));
            cout<<"introduzca el documento del paciente: ";
            cin>>aux->val;
            cout<<"Introduzca el nombre de paciente: ";
            cin>>aux->nombre;
            aux->sig=NULL;
            aux2=cab; 
            while (aux2->sig!=NULL)
            {
                aux2 = aux2->sig;
            }
            aux2->sig =aux;
            aux2=aux=NULL;
            free(aux);
            free(aux2);                    
        }
    return 0;
}

int mostar(){
     cout<<"PACIENTES REGISTRADOS"<<endl;
     cout<<"-----------------------"<<endl;
    for(aux=cab; aux!=NULL; aux=aux->sig){
    cout<<"Documento: "<<aux->val<<endl;
    cout<<"Nombre: "<<aux->nombre<<endl;
    cout<<endl;
    }
    return 0;
}

int main(){
    int opc=0;
    do{
        cout<<" MENU "<<endl;
        cout<<"-------"<<endl;
        cout<<" (1) registrar paciente"<<endl;
        cout<<" (2) ver pacientes"<<endl;
        cout<<" (3) salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1: registrar();
            break;
            
            case 2: mostar();
            break;

            case 3:
                   cout<<"SU SECION A ACABADO";
                   break;
            
            default:
            cout<<"opcion no validad";
            break;       
        }
        
    }while(opc != 3);
    {   
      
    }

    {
    
    }

 return 0;
    
}
