#include<stdio.h>
#include<math.h>
int kt(int n){
	int tmp=n;
	int cnt=0;
	while(n!=0){
		cnt++;
		n=n/10;
	}
    int h=tmp/pow(10,cnt-1);
    if (h%2==0) return 0;
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
