/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
char txt2[50];
char cle[50]={'k','v','s','i','a','w','h','x' ,'p','b','y','o','j','l','q','t','g','m','f','u' ,'e','z','d', 'r' ,'c' ,'n'};
char alphabet[50]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int i, l,j;
printf("donner un texte :");
scanf("%s",txt2);
l=strlen(txt2);
for(i=0;i<l;i++){
    for (j=0;j<26;j++){
    if(txt2[i]==alphabet[j]){
        txt2[i]=cle[j];
               break ;}
    else if(txt2[i]==alphabet[j]+'a'-'A'){
               txt2[i]=cle[j]-'a';}
    }
}

printf("texte crypté=%s \n",txt2);
for(i=0; i<strlen(txt2); i++)
    {
            for (j=0;j<26;j++){
                if (txt2[i]==cle[j]+'a'-'A'){
               txt2[i]=alphabet[j]-'a';
               break ;}
               else if (txt2[i]==cle[j]){
               txt2[i]=alphabet[j];
               break ;}
            }
            }
printf("la chaine crypté :%s",txt2) ;           
    
    return 0;
}

