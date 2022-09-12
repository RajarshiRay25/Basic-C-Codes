#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],sum[3][3],diff[3][3];
    int i,j;
    //Array-1 - Input
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER ELEMENTS FOR ARRAY-1 : ");
            scanf("%d",&arr1[i][j]);
        }
    }
    //Array-2 - Input
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER ELEMENTS FOR ARRAY-2 : ");
            scanf("%d",&arr2[i][j]);
        }
    }
    //Array-1 - Output
    printf("ARRAY : 1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",arr1[i][j]);
        }
        printf("\n");
    }
    //Array-2 - Output
    printf("ARRAY : 2 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",arr2[i][j]);
        }
        printf("\n");
    }

    //Sum
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("ARRAY SUM : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",sum[i][j]);
        }
        printf("\n");
    }

    //Difference
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("ARRAY DIFFERENCE : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}