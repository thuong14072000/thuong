#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	int sum=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
		sum=sum+a[i];
	}
	int tmp=2*sum/n;
	for (int i=0;i<n-1;i++){
		if(b[i]){
			for (int j=i+1;j<n;j++){
			if(b[i]){
				if (a[j]==(tmp-a[i])){
					printf("%d %d\n",i+1,j+1);
					b[j]=0;
					break;
				}
			}
		}}
	}
	return 0;
}
