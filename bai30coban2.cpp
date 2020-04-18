#include<stdio.h>
int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	int a[n];
	int cnt=1;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<n;i++){
	if(a[i]-a[i-1]<=t) cnt++;
    else cnt=1;
	}
	printf("%d",cnt);
	return 0;
}
