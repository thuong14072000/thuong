#include<stdio.h>
#include<math.h>
int kt(int n){
	int tmp=n;
	while(n!=0){
		int r=n%10;
		if (r%2==0) return 0;
		n=n/10;
	}
    return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		if (kt(a[i])) printf("%d ",a[i]);
	}
}
