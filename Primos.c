#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int concprima(int e[], char c[]){
	int n,i,l,k,j,m,ver,p,a;
	l=1;
	j=1;
	n=0;
	ver=0;
	a=0;
	m= atoi(c);
	
	for(n=0;n<strlen(c);++n){
		if (c[n]<48 || c[n]>57){
			return j;} 
		 }
		 
	if (e[0]==0 || m==1)
		return j;
	for(n=0;n<strlen(c);++n){
		
		if (c[n]<48 || c[n]>57)
			return j;
		if (e[n]==1 && e[n]==e[strlen(c)-1]){
			e[n]=(e[n-1] * (pow(10,1))) + e[n];
			++l;}
		if (e[n]==1){
			e[n+1]=(e[n] * (pow(10,1))) + e[n+1];
			++l;
			break;				
		}
		for (i=2;i<e[n];++i) {
			
				if (e[n] % i==0 || e[n]==1 || e[n+1]==0)  {
				if ((strlen(c))-1==n){
					if (ver==0)				
					return j;
					e[n]=(e[n-l] * (pow(10,l))) + e[n];
				for(a=2;a<e[n];++a){
					if (e[n] % a==0 ){
						return j;} } }
				e[n+1]=(e[n] * (pow(10,1))) + e[n+1];
				++l;
				p=1;
				break;
			}
		}
		if (p!=1){
			l=1;
			ver=1;
			p=0;}
}
	++j;
	return j;

}
int main (){
	int v,i,e[5],j,l,k;
	char c[5];
	scanf("%d",& v);
	for (i=0;i<v;++i){
		scanf("%s",c);
		for(j=0;j<strlen(c);++j){
			e[j] = (c[j]-48) ;
		}
		k=concprima(e,c);
		if (k ==1){
			printf("nao\n");
		}
		if(k==2){
			printf("sim\n");
		}
	}
	system("pause");
	return 0;
}
