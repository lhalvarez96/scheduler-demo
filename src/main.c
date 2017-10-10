#include <stdio.h>

int main() {
  int a[5];
  int n,j,k;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i<n; i++) {
	k=1;

	for(j=0; j<=4; j++){
		
		if((i+1)%a[j]==0){
			printf("%d",j);
			k=0;
		}
		
	}

if(k==1){
printf("-");

}			

printf("\n");
  }

  return 0;
}
