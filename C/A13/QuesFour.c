#include <stdio.h>

int main() {
    int x, y, z,d;

    while (1) {
        printf("Enter three numbers: ");
        scanf("%d%d%d", &x, &y,&z);

        printf("\nChoose option\n"
               "1) Isosceles\n"
               "2) Right angled\n"
               "3) equilatreal\n"
               "4) Exit\n"
               ">>> ");

        scanf("%d", &d);

        switch (d) {
            case 1:
                printf("%s isosceles triangle\n", (y==z||x==z||y==x) ? "yes" : "No");
                break;

            case 2:
                if(z>x&&z>y){
                    printf("%s right angled triangle\n", (z*z==y*y+x*x) ? "yes" : "No");
                }else if(x>z&&x>y){
                     printf("%s right angled triangle\n", (x*x==z*z+y*y) ? "yes" : "No");
                }else{
                     printf("%s right angled triangle\n", (y*y==z*z+x*x) ? "yes" : "No");
                }
                break;

            case 3:
                 printf("%s equilateral triangle\n", (x==y&&x==z&&z==x) ? "yes" : "No");
                break;

            case 4:
                printf("exiting...");
                goto l1;


            default:
                printf("Invalid option\n");
        }
    }
    l1:
      return 0;
}