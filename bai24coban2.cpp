#include<stdio.h>
void kt(int a[],int n){
	for (int i=0;i<n;i++){
		if (a[i]!=a[i+1]){
			if(i==0){
				if(a[0]!=a[2])printf("1");
				else 
					printf("2");
				return;	
				}
		else {
			if (a[i]!=a[i-1]) printf("%d",i+1);
			else printf("%d",i+2);
			return;
			}
		}
	}
	
}
	
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i]%2;
	}
	kt(b,n);
	return 0;
}
