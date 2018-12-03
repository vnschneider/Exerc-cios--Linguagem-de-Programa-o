#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

struct contas {
	float d,c;
	char tipo[2];
	char numero[15];
};
struct contas q[1000];
int dc (int i,int n){
	int e,j,l,k; 
	char n1[15],n2[15];
	for (e=n;e>=0;--e){
		if(strcmp(q[e].tipo,"A")==0){
			for(j=e;j<n;++j){
			if (strlen(q[e].numero)!=strlen(q[j].numero)-1)
				continue;
			strcpy(n1,q[j].numero);
			n1[strlen(q[e].numero)]= NULL;
			for(k=0;k<strlen(q[j].numero)-1;++k){
				n2[k]=q[j].numero[k+1];
			}
			if (strcmp(n1,q[e].numero)==0 || strcmp(n2,q[e].numero)==0) {
				q[e].d=(q[j].d) + (q[e].d);
				q[e].c=(q[j].c) + (q[e].c);
			}
			}
		}
	
	}

}
int main (){
	int n,i,e;

	scanf("%d",&n);	
	for (i=0;i<n;++i){
		printf("\nNumero:");
		scanf("%s",q[i].numero);
		while(q[i].numero[0]=='0'){
			for (e=0;e<strlen(q[i].numero);++e){
			q[i].numero[e]=q[i].numero[e+1]; }
		}
		for (e=strlen(q[i].numero)-1;e>=0;--e){
			if (q[i].numero[e]!='0'){
			q[i].numero[e+1]= NULL;
			break; }
			}
			printf("\ntipo:");
		scanf("%s",& q[i].tipo);
		q[i].c=0;
		q[i].d=0;
		if(strcmp(q[i].tipo,"S")==0){
			printf("\ncredito:");
			scanf("%f",& q[i].c);
			printf("\ndebito:");
			scanf("%f",& q[i].d);
			}

	}	
	dc (i,n);
	for (i=0;i<n;++i){
		printf("%s ",q[i].numero);		
		printf("%.2f ",q[i].c);
		printf("%.2f ",q[i].d);
		printf("\n");
}
	system("pause");
	return 0;
}
