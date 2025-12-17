
Sanjitha S Varamballi
2:49 PM
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);        
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    
    for(int i=0;i<N-2;i++)
    {
        for(int j=i+1; j<N-1; j++)
        {
            for(int k=j+1; k<N ; k++)
            {
                if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
                {
                    printf("YES");
                    exit(0);
                }
            }
        }
    }
    printf("NO");
    return 0;
}
pga-wrni-dna
