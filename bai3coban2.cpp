#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int h=n/2;
	if (n%2==0) printf("%.2f",(float)(a[h]+a[h-1])/2);
	else printf("%d",a[h]);
}
