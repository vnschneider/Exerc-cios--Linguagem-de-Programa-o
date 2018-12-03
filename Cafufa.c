#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
	
	int n,p,d,e;
	char c,h[4];
	
	c=',';
	fgets(h,4,stdin);
	n=atoi(h);
	scanf("%d",&p);
	scanf("%d",&d);
	
	if (d != 0 && p!=0 && d<10 && p<10){
		
		for (e=1;e<=n;++e)
		{
			itoa(e,h,10);
			if (e==n)
				c='.';
			if (e % p == 0 || e % d == 0 || p == h[strlen(h)-1] -48 || d == h[strlen(h)-1] -48 )
				printf("Cafufa%c",c);
			if (e % p != 0 && e % d != 0 && p != h[strlen(h)-1] -48 && d != h[strlen(h)-1] -48 )
				printf("%d%c",e,c);

		}
	}	
	system("pause");
	
	return 0;
}
