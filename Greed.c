#include<stdio.h>

int main ()
{
  int n,i,j,sum=0;
  scanf ("%d", &n);
  long long int arra[100001],arrb[100001];
  for (i = 0; i < n; i++)
    {

      scanf ("%lld", &arra[i]);
    }

    for(i=0;i<n;i++){
        scanf("%lld",&arrb[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+arra[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arrb[i]+arrb[j]>=sum && i!=j && arrb[i]!=0 && arrb[j]!=0){
                printf("YES");
                return 0;
            }
            else{
                continue;
            }
        }
    }
    printf("NO");
}
