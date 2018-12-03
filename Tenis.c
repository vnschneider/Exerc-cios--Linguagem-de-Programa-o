#include <stdlib.h>
#include <stdio.h>

int set(int x, int o){
	int l,k,i,e,s[x+o],p[x+o];
	for(i=0;i<x+o;++i){
		scanf("%d %d",&s[i],&p[i]);
	}
	l=0;
	k=0;
	for (e=0;e<i;++e){
		if(s[e]!= -1 && p[e]!= -1){
			if(s[e]>p[e]){
				--x;
			}else {
				--o;
			}
			l=l+s[e];
			k=k+p[e];	
		}
		if (s[e]== -1 && p[e]== -1){
			l=l+20;
			k=k+18;
			--x;
		}
		if (s[e]== -1 && p[e] != -1){
			if (p[e]<=9){
				l=l+11;
				k=p[e]+k;
				--x;}else{
					if(x<1){
						l=p[e]-2+l;
						k=p[e]+k;
						--o;
					}else{
						l=p[e]+2+l;
						k=k+p[e];
						--x;
					}
				}
		}
		if( s[e]!= -1 && p[e]== -1){
			if (s[e]<=9){
				k=k+11;
				l=l+s[e];
				--o;}else{
					if(o<1){
						k=s[e]-2+k;
						l=l+s[e];
						--x;
					}else{
						k=s[e]+2+k;
						l=l+s[e];
						--o;
					}
				}
			
		}
	}
	printf("%d %d \n",l,k);
	return 0;
}

int  main (){
	int  x,o,p,i;
	scanf("%d",&p);
	for (i=1;i<=p;++i){
		scanf("%d %d",&x,&o);
		set(x,o);
	}
	
	system("pause");
	return 0;
}
