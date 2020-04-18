#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	int sum=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i]%2;
		sum=sum+b[i];
	}
	int tmp=abs(sum-n);
	if (tmp<sum) printf("%d",tmp);
	else printf("%d",sum);
	return 0;
}
