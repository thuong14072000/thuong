#include<stdio.h>
#include<math.h>
int kt(int a[],int n){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (abs(a[i]-a[j])==1) return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if (kt(a,n)) printf("YES");
	else printf("NO");
}
