//ćwiczenie c
#include <stdio.h>
int a,n;
int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&a);
        if(a % 2 != 0)
            printf("%d ",2*a);
        else
            printf("%d ",a);
    }
}
