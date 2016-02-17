#include <stdio.h>
 
const int n = 8;
 
void Farey(int a, int b, int c, int d)
{
    int P,Q;
    if(b<=n && d<=n)
    {
        P=a+c;
        Q=b+d;
        Farey(a,b,P,Q);
        if(Q<=n) printf("%d/%d\n",P,Q);
        Farey(P,Q,c,d);
    }
}
int main(void)
{
    Farey(0, 1, 1, 1);
    return 0;
}
