#include <stdio.h>

int main() {
 int s=10;
 int a[s]; 
 int i;

 printf("Enter elements of array(10): ");
 for(i = 0; i<s; i++) {
 	scanf ("%d",&a[i]);
 }
 int j;

 for (i=0; i<s-1 ; i++) {
 	for(j=0; j<s-i-1 ; j++){
 		if(a[j]>a[j+1]){
 			int k=a[j];
 			a[j]=a[j+1];
 			a[j+1]=k;
 		}
 	}
 }
 printf("Sorted array: ");
 for(i = 0; i<s; i++) {
 	printf("%d ", a[i]);
 }
return 0;
}
