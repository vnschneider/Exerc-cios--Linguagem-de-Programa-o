#include <stdio.h>
#include <stdlib.h>

int passos (int n1, int n2, int p){
	int d;
	if (p%2==0){
		d=n1-n2;
	}else{
		d=n1+n2;
	}
	return d;
}
int main (){
	
	int a,i,e,j,f,p;
       	scanf("%d", & i);
	
	if (i==0) return 0;
	  e=0;
	  a=0;
	  p=0;
	
	for (j=0;j<=i;++j){
		scanf("%d",&f);
		e= passos(e,f,j);
	  if(e<p) p=e;
	  if(e>a) a=e;
	}
	
	p=p*(-1);
	  if (a<p)a=p;
	    printf("%d",a);
	    system("pause");
	return 0;
}
