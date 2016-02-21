#include <stdio.h>

void Farey(int n){
    struct Rational {
        int a,b;
    };
    const int s=1000;
    struct Rational m[s];
    int i, k=2;

    m[0].a=0;
    m[0].b=1;

    m[1].a=1;
    m[1].b=1;
    for (i=0; i<n+1; i++) {
        int j=0;
        while (j<k-1) {
            if ((m[j].b+m[j+1].b)==i) {
                int l;
                for (l=k+1; l>j+1; l--) {
                    m[l]=m[l-1];
                }
                m[j+1].a=m[j].a+m[j+2].a;
                m[j+1].b=m[j].b+m[j+2].b;

                j++;
                k++;
            }
            j++;
        }
    }

    for (i=0;  i<k ; i++){
            printf("%d/%d\n", m[i].a, m[i].b);
        }
    return;
}

int main() {
    int n;
    scanf("%d", &n);
    Farey(n);
    return 0;
}
