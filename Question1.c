#include<stdio.h>
int binary(int);
int octal (int);
int hexadecimal(int);

int binary(int n){
    int temp,r,count=0;
      temp=n;
      int i;
      int arr[25];

    for(i=0;temp!=0;i++){
       
        r=temp%2;
        arr[i]=r;
        temp=temp/2;
        
		count++;
          
    }
    printf("Binary - ");
    int j;
    for(j=count-1;j>=0;j--){
    printf("%d",arr[j]);
    }
    printf("\n");
    return 0;


}
int octal(int n){
    int temp,r,count=0;
      temp=n;
      int i;
      int arr[25];

    for(i=0;temp!=0;i++){
       
        r=temp%8;
        arr[i]=r;
        temp=temp/8;
        
		count++;
          
    }
    printf("Octal - ");
    int j;
    for(j=count-1;j>=0;j--){
    printf("%d",arr[j]);
    }
    printf("\n");

    return 0;


}
int hexadecimal(int n){
    int temp,r,count=0;
    
    int arr[25];
    int i,j;
    temp=n;

    for(i=0;temp!=0;i++){
       
        r=temp%16;
        arr[i]=r;
        temp=temp/16;
        
		count++;
          
    }
    printf("Hexadecimal - ");
    
    for(j=count-1;j>=0;j--){
        if(arr[j]>=10){
        switch(arr[j]){
            case 10 :
            printf("A");
            break;
            case 11 :
            printf("B");
            break;
            case 12 :
            printf("C");
            break;
            case 13 :
            printf("D");
            break;
            case 14 :
            printf("E");
            break;
            case 15 :
            printf("F");
            break;
        }
        }
        else{
       printf("%d",arr[j]);
        }
    }
    return 0;

}


int main(){
    int n,temp,r,count=0;
    printf("Enter any decimal number\n");
    scanf("%d",&n);
    binary(n);
    octal(n);
    hexadecimal(n);
    
    return 0;

}
