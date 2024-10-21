#include <stdio.h>
    int sumOfArray(int arr[]){
            int sum=0;
            for(int i=0;i<10;i++){
                sum+=arr[i];
            }
            return sum;
    }
int main(){
    //* data_type array_name[array_size] = {array_elements}

    int arr[10]= {0,1,2,3,4,56,6,7,8,9};
    // printf("%d", arr[5]);

    arr[5] =5;
    //  printf("%d\n", arr[5]);
    //*Array traversing 
    // for(int i=0;i<10;i++){
    //     //  printf("%d\n", arr[i]);
    //     sumOfArray+=arr[i];
    // }

    int cal = sumOfArray(arr);
    printf("%d\n", cal);

    

    return 0;
}