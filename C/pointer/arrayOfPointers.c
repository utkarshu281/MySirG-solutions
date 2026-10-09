#include<stdio.h>
void data_input(int **,int size[]);
void sir_input_method(int **, int,int []);
void printing_array_values(int **,int size,int base_address);
void printing_array_values(int **p, int size, int base_address){
    for(int i=0;i<size;i++){
        printf("%d ",*(p[base_address]+i));
    }
}
void f1(int [][4], int);
void f1(int x[][4], int row){}
void data_input(int **p, int size[]){
    int c;
    printf("choose an array a[5],b[6],c[3],d[8]:\n");
    scanf("%d",&c);
    switch(c){
        case 97:
            printf("enter the vlaues for array a:\n");
            for(int i=0;i<size[0];i++){
                scanf("%d",p[0]+i);
            }
            printing_array_values(p,size[0],0);
            break;
        case 98:
            printf("enter the vlaues for array b:\n");
            for(int i=0;i<size[1];i++){
                scanf("%d",p[1]+i);
            }
            printing_array_values(p,size[1],1);
            break;
        case 99:
            printf("enter the vlaues for array c:\n");
            for(int i=0;i<size[2];i++){
                scanf("%d",p[2]+i);
            }
            printing_array_values(p,size[2],2);
            break;
        case 100:
            printf("enter the vlaues for array d:\n");
            for(int i=0;i<size[3];i++){
                scanf("%d",p[3]+i);
            }
             printing_array_values(p,size[3],3);
            break;
        default:
            printf("inalid");
    }
}
void sir_input_method(int **q,int n, int size[]){
    //double pointer becuz jb hum main se pointer pass karenge then p[0] ka address(or base address) ayega 
    //jo khud dusre ka address hold rahah hai pointer-->pointer-->base address of an array
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<size[i];j++){
           // scanf("%d",*(q+i)[j]); //my attempts
           // scanf("%d",(q+i)+j); //my attempts
            scanf("%d",*(q+i)+j); //what sir did and i didnb't get it
            /*q-->pointing p[0] ya uska base address +i will help to acces other addres of pointer array
            now let's say i=0 then q+i=p[0](base address of p) now *(&p[0]) since p[0] is pointing towrads the 
            base address of a or &a[0] then this will equal to q+i=&a[0] //dereferncing 
            now &a[0]+j will geth the address of differnet byte of arraus  */
        }
    }

}
int main(){
    int a[5],b[6],c[3],d[8],size[4];
    int *p[4]; //arrays of pointer
    p[0]=a; // &a[0] base address of array a
    p[1]=b; //&b[0] base address of array b
    p[2]=c;//&c[0] base address of array c
    p[3]=d; //base address of array d
    size[0]=5;
    size[1]=6;
    size[2]=3;
    size[3]=8;
    //data_input(p,size);
    sir_input_method(p,4,size);
    int x[3][4]={{1,2,3,4},{5,6,7,8,9},{10,11,12,13},{14,15,16,17}};
    f1(x,3);
    return 0;
}