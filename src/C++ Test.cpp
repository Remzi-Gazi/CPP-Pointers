#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int temp =*a;
    int* pTemp = &temp;
    (*a)=(*a)+(*b);
    if((*pTemp)-(*b)<0){
        (*b)=-((*pTemp)-(*b));
    }else{
        (*b)=(*pTemp)-(*b);
    }


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
