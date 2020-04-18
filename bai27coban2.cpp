#include<stdio.h>
#include<math.h>
int kt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	  if (n%i==0) return 0;
	return 1;  
}
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
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[j]<a[i]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("Test %d\n",k);
		for (int i=0;i<n;i++){
		int cnt=1;
		if (b[i] && kt(a[i])){
			for (int j=i+1;j<n;j++){
				if (a[i]==a[j]) {
			    cnt++;
				b[j]=0;}
			}
		printf("%d xuat hien %d lan\n",a[i],cnt);}}}
}
