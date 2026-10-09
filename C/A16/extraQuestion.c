#include<stdio.h>
int power(int*);
int octal_to_decimal(int, int *);
int octal_to_decimal(int n, int *p){
    int i,j;
    int rm;
    i=n%10;
    if(n>0){   // n>0 = abhi digits bache hain (i>0 sirf current digit check karta tha, isliye 100 / 107 fail hote the)
        rm=n/10;
        j=i*power(p);
       /*
        return (octal_to_decimal(rm,p)+(i*power(p)));
        Isme UNSPECIFIED ORDER ka issue hai (pure UB nahi).

        Kyun UB nahi?
        C ka rule: agar ek hi variable ko do jagah modify karo aur beech mein
        koi sequence point na ho, to wo undefined behavior hai.
        Lekin yahan twist hai: function call ke andar ka code (jaise power())
        apne aap mein ek poora block hota hai. C kehta hai do function calls
        overlap nahi karte, ya to ek poora khatam hoga phir doosra shuru.
        Isko "indeterminately sequenced" kehte hain.

        To problem ye hai: pehle left (recursive call) chalega ya right
        (power(p)), ye compiler decide karta hai. Dono mein *p ki value
        alag hogi, to result 83 ya 209 ho sakta hai.

        Fix: j=i*power(p); alag statement mein likha. ';' ki wajah se power(p)
        recursive call se pehle poora hota hai, to order guaranteed hai.
       */
       return octal_to_decimal(rm,p)+j;
    }
    return 0;
}
int power(int *n){
    int i,result=1;
    if(*n==0){
        (*n)++;
        return 1;
    }
    for(i=1;i<=*n;i++){
        result*=8;
    }
    (*n)++;
    return result;
}
int main(){
    int n,power=0;
    int *p;
    p=&power;
    scanf("%d",&n);
    int value=octal_to_decimal(n,p);
    printf("%d",value);
    return 0;
}