/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
 char txt[60];
 char crypt[60];
 char decrypt[60];
 int n ,i,l,j;
 
 printf("donner un texte :");
 scanf("%s",txt);
 
 do {
 printf("donner n :");
 scanf("%d",&n);}
 while (n>=26 || n<=0);
 
//chiffrement 
l=strlen(txt);
for(i=0;i<l;i++){
  /* Si le caractere est une minuscule */
        if ('a' <= txt[i] && txt[i] <= 'z')
            {txt[i]=(((txt[i]-'a')+n)%26)+'a';
            crypt[i]=txt[i];
            }
       
 /* Si le caractere est une majuscule */
     else if ('A' <= txt[i] && txt[i] <= 'Z')
              { txt[i]=(((txt[i]-'A')+n)%26)+'A';}
              crypt[i]=txt[i];
              }
printf("le text crypté est : %s \n",crypt) ;  
//dechifremen
for(i=0;i<l;i++){
  /* Si le caractere est une minuscule */
        if ('a' <= txt[i] && txt[i] <= 'z')
            {txt[i]=(((txt[i]-'a')-n)%26)+'a';
            decrypt[i]=txt[i];
            }}
printf("le text decrypté est : %s",decrypt) ;              
    return 0;
}

    