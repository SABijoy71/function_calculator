#include <stdio.h>
#include <string.h>

int sum(int n1,int n2);
int sub(int n1,int n2);
void show_result(int n1,int n2,char sign,int result);

int main(void){

    int n1,n2;
    printf("Enter two number: ");
    scanf("%d %d", &n1,&n2);
    
    char sign;
    printf("Enter operation sign(+ or -): ");
    getchar();
    sign = getchar();

    int result;

    if(sign == '+'){
        result = sum(n1,n2);
    }else if(sign == '-'){
        result = sub(n1,n2);
    }else{
        printf("Invalid sign!\n");
    }

    show_result(n1, n2, sign, result);

    return 0;
}

// this one for addition two number
int sum(int n1,int n2){ 
    return n1+n2;
}

// this one for substraction two number
int sub(int n1,int n2){ 
    return n1-n2;
}

// this one is only for print calculation.
void show_result(int n1, int n2, char sign, int result){
    printf("%5d\n", n1);
    printf("%3c%d\n",sign,n2);
    printf("------\n");
    printf("%5d\n", result);
}
