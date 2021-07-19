#include <stdio.h>

int iccanobif(int i){
	if(i==1 || i==2){
		return 1;
	}
	else return iccanobif(i-1)+iccanobif(i-2);
}
 
int main() {
	 int n,i;
	 scanf("%i",&n);
	 int v[n];
	 for(i=1;i<=n;i++){
	 	v[i-1] = iccanobif(i);
	 }
	 for(i=n-1;i>=0;i--){
	 	if(i!=0) printf("%d ",v[i]);
	 	else printf("%d\n",v[i]);
	 }
	  return 0;
}
