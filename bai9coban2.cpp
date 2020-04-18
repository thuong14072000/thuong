#include<stdio.h>
int main(){
	int n,chiso;
	scanf("%d",&n);
	int a[n];
	int cnt=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (a[i]<0) cnt++;
	}
	if (cnt==n) printf("-1");
	else {int min=1000000000;
		for (int i=0;i<n;i++){
			if (a[i]>0){
				if(a[i]<min) {
				min=a[i];
				chiso=i+1;
				
			}
		}}
	printf("%d",chiso);	
	}}
