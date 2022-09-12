#include <stdio.h>
int main()
{
    int lim;
    printf("ENTER LIMIT : ");
    scanf("%d", &lim);
    int arr[lim], dupl_arr[lim],final[lim], i, j, count = 0,flag=0,dup=0;
    printf("ENTER ELEMENTS : \n");
    for (i = 0; i < lim; i++)
    {
        scanf("%d", &arr[i]);
    }
    // check for duplicates count
    for (i = 0; i < lim; i++)
    {
        for (j = i + 1; j < lim; j++)
        {
            if (arr[i] == arr[j])
            {
                dupl_arr[dup] = arr[i];
                dup++;
                count++;
                break;
            }
        }
    }
    // for(i=0;i<dup;i++){
    //     printf("%d \t",dupl_arr[i]);
    // }

    for(i=0,j=0;i<lim,j<dup;i++,j++){
        if (arr[i] != dupl_arr[j]){
            final[i] = arr[i];
        }
    }
    for(i=0;i<lim;i++){
        printf("%d \t",final[i]);
    }
    return 0;
}