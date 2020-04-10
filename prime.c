#include <stdio.h>
int prime(int n,int p){
     if (p==0) {
         return 1;
    }
     else if(n%p==0 && p!=1){

        return 0;
    }
     else
        return  prime(n,p-1);
}
int main(){
    int n;
    printf("Enter the no. to be checked\n");
    scanf("%d",&n);
    if(prime(n,n-1)==1){
        printf("No. is prime\n");
    }
    else{
        printf("No. is not prime\n");
    }
    return 0;

}
