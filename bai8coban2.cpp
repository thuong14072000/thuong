#include<stdio.h>
void kt(int a[],int n){
	for (int i=n-1;i>=0;i--){
		if (a[i]%2!=0){
			printf("%d",i+1);
			return;
		}
	}
	printf("-1");
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	kt(a,n);
}
