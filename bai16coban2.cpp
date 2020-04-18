#include<stdio.h>
#include<math.h>
int cp(int n){
	int can=sqrt(n);
	if (can*can==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for (int i=0;i<n;i++){
		if(cp(a[i])) sum=sum+a[i];
	}
	printf("%d",sum);
}
