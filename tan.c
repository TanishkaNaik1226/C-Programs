#include<stdio.h>

int main(){
int n,s=0;
int array[1000];

printf("enter the value of n");
scanf("%d",&n);

printf("enter the array number");
for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
}

for(int i=0; i<n; i++){
    s += array[i];
}
printf("sum of the array is %d", s);
return 0;
}

