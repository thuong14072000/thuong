#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	int max=a[1];
	int min=a[1];
	for (int i=0;i<n;i++){
		if (max<a[i]) max=a[i];
	}
	for (int i=0;i<n;i++){
		if (min>a[i]) min=a[i];
	}
	if (abs(max-x)<abs(min-x)) printf("%d",min);
	else printf("%d",max);
}
//ahihi
