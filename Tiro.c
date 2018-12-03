#include <stdio.h>
#include <stdlib.h>

int main (){
	int i,c,a,d[50];
	scanf("%d", & i);
	a=1;
	
	for (c=0;c<i;c++){
		scanf("%d",& d[c]);
		a= mmc (d[c],a);
	}
	
	if (i!=0)
	printf("\n%d",a);
	system("pause");
	
return 0;
}

int mmc(int a1, int b1){
	int a,b,c,mmc;
     	b=b1;
	    a=a1;
	do{
		c=(a % b);
		a=b;
		b=c;
	}while(c!=0);
	    mmc =(a1*b1)/a;
return mmc;
}
