/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *ch1, *ch2,*ch3;

int n,i ,j,k=0, aide;
char c ;
float pa ;
ch1=(char*)malloc(100);
ch2=(char*)malloc(100);
ch3=(char*)malloc(100);
printf ("donner un texte :");
gets(ch1);
n=1;

for(i=0;i<strlen(ch1)-1;i++){
    for(j=i+1;j<strlen(ch1);j++){
if(*(ch1+i)==*(ch1+j)){
n=n+1;}
    }   
    
pa=1/(float)n;
*(ch2+k)=n;
k++;

printf("symbole %d: %c NBoccurence :%d proba :%f\n",k,*(ch1+i),n,pa);}
// tri 

for(i=0;i<k;i++){
for(j=0;j<k-i-1;j++)
if (*(ch2+j)<*(ch2+j+1))
 {
 aide=*(ch2+j);
 *(ch2+j)=*(ch2+j+1);
 *(ch2+j+1)=aide;
 ch3=*(ch3+j);
 *(ch3+j)=*(ch3+j+1);
 *(ch3+j+1)=c;
 }
 printf("Symbole %d: %c NbOccurece: %d Proba: %f\n",i,*(ch3+i),*(ch2+i),1/(float)*(ch2+i));
 }
    return 0;
}

