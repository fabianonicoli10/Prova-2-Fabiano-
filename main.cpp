#include <iostream>
using namespace std;
char palavra [50],antiga_msg [50],nova_msg [50]; //declarando vetores
int contador = 0, cont=0; //declarando contadores
char *ponteiro_nova_msg,*ponteiro_antiga_msg; //declarando ponteiros
char substituido,substituto;//declarando variaveis de substituicao


int funcao (char antiga_msg_func [50], char substituido_func, 

char substituto_func, char nova_msg_func[50]) //funcao contadora
{
  for(int m=0;m<50;m++)
  {
    if(antiga_msg_func [m]!=nova_msg_func[m])
    {
      contador++;
    }
  }
  return contador ;
}


int main()
{
cout<<"Digite uma palavra :"<<endl;
cin>> palavra;

cout<<"Qual caracter deseja subsituir ?"<<endl;
cin>>substituido;

cout<<"Por qual caracter deseja subsituir ?"<<endl;
cin>>substituto;

  for(int j=0;j<50;j++)
  {
    antiga_msg[j]=palavra[j]; //salvando a palavra digitada
    ponteiro_antiga_msg = antiga_msg; //transformando em ponteiro
  }

  for(int i=0;i<50;i++)
  {
    if(palavra[i]==substituido)
    {
    palavra[i] = substituto; //substituindo a letra escolhida pelo usuario na palavra que ele digitou
    }
  }

  for(int k=0;k<50;k++)
  {
  nova_msg[k]=palavra[k];//salvando a nova mensagem
  ponteiro_nova_msg = nova_msg;//transformando a nova mensagem em ponteiro
  }

cout<<nova_msg<<endl; //printando a nova mensagem
cout<<antiga_msg<<endl; //printando a mensagem original
cout<<funcao (ponteiro_antiga_msg,substituido,substituto,ponteiro_nova_msg )<<endl; // chamando a funcao contadora e printando na tela
}