#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max1=-1000000000;
	int max2;
	for (int i=0;i<n;i++){
		if (a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2) max2=a[i];}
	for (int i=0;i<n;i++){
		if (a[i]<max1 && a[i]<max2) printf("%d ",a[i]);}
	
}
