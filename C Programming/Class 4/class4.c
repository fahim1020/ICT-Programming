#include <stdio.h>

    //*addition
    int sum(int a, int b ) {
        //? int a=5,b=19;
        return a+b;  
    }
    //*subtraction
    int sub(int x, int y){
        return x-y;
    }
    //*Division
    int div(int x, int y){
        return x/y;
    }   
     //*multiply
    int mult(int x, int y){
        return x*y;
    }

    float areaOfTriangle(float b, float h){
        float cal = 0.5*b*h;

        return cal;
    }

    float average (float a, float b,float c){
        float res = (a+b+c)/3;
        return res;
    }
    int max(int x,int y,int z){
        if(x>y && x>z){
            return x;
        }else if (y>x && y>z)
        {
            return y;
        }else{
            return z;
        }
        

    }
    // even or odd
    void isEven(int a){
        if(a%2==0){
            printf("YES, EVEN");
        }else
        {
            printf("NO, Odd");
        }
        
    }

int main(){
    //Function
    //DataType functionName (parameter){
    // calculations
    //return value;
    //}

    int addition = sum(7,5);
    int subtraction = sub(7,5);
    int division = div(7,5);
    int multiply = mult(7,5);
    // printf("The addition is: %d\n", addition);
    // printf("The subtraction is: %d\n", subtraction);
    // printf("The division is: %d\n", division);
    // printf("The multiply is: %d\n", multiply);

    // Area of Triangle 
    // float area = areaOfTriangle(20.7,15.9);
    // printf("Area of Triangle : %f",area);

    // Average 
    // float avg = average(10.5,20.9,30.8);
    // printf("%f",avg);


    // Max value of 3 digits 
    // int maxValue = max(101,77,25);
    // printf("%d", maxValue);

    // even or odd
    // isEven(136);




    // int sum=0;
    //For loop
    // for(int i=1;i<=10;i++){
    //     sum+=i; //sum = sum+i
    // }
    // printf("%d",sum);

    //While loop
    // while(0){ //1 = true & 0 = false
    //     printf("YES\n");
    // }

    // int z=10;
    // while (z--)
    // {
    //     printf("%d\n",z);
    // }
    
    //Do while loop
    // int k=7;
    // do{
    //     // if(k==3){
    //     //     break;
    //     // }
    //     if(k%2!=0){

    //     printf("%d I am running!!!\n",k);
    //     }
    // k--;
    // }while(k);






    return 0;
}