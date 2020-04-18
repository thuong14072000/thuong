#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int sum1=0;
	int sum2=0;
	int sum3=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (i%3==0) sum1=sum1+a[i];
		else if (i%3==1) sum2=sum2+a[i];
		else sum3=sum3+a[i];
	}
	if (sum1>sum2 && sum1>sum3) printf("chest");
	else if (sum2>sum1 && sum2>sum3) printf("biceps");
	else printf("back");
	return 0;
}
