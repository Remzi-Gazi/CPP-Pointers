#include <stdio.h>

void update(int *a,int *b) {
    
    int temp =*a; // take the value of a
    int* pTemp = &temp; //create a pointer to point the temp value
    
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
