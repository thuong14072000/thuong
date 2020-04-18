#include<stdio.h>
int kt(int n){
	int cnt1=0;
	int cnt2=0;
	while(n!=0){
		int t=n%10;
		if (t==9) cnt1++;
		else if (t==1) cnt2++;
		n=n/10;
	}
	if (cnt1>0 && cnt2>0) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int cnt=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (kt(a[i])) cnt++;
	}
    printf("%d",cnt);
	return 0;}
