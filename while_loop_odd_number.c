#include <stdio.h>

int main() {
    
    int n,i=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Odd Numbers \n");
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
        i++;
    }
    
    return 0;
}