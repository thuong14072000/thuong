#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int k=1;k<=t;k++){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	printf("Test %d\n",k);
	for (int i=0;i<n;i++){
		int cnt=1;
		if (b[i]){
			for (int j=i+1;j<n;j++){
				if (a[i]==a[j]) {
			    cnt++;
				b[j]=0;}
			}
		printf("%d xuat hien %d lan\n",a[i],cnt);}}
}
}
