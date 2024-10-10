#include <stdio.h>
    int add(int a, int b, int c){
        return a+b+c;
      }
      float div(float x,float y){
        return x/y;
      }
      //C to F
      float c2f(float c){
            return ((c*(9.0/5.0)))+32;
      }

      int sumOfSeries(int n){ // 1+2+3+4=10 // n*(n+1)/2 | 4*5/2 | 20/2 | 10
            // return n*(n+1)/2; // O(1)
            int sum=0;
            for(int i=1;i<=n;i++){ // O(n)
                sum+=i;
            }
            return sum;
      }
    void isLeap(int year){
        if (year%4==0)
        {
            printf("WOW! Welcome Leap Year");
        }else
        {
               printf("Sorry! Where are you Leap Year");
        }       
    }

    long long factorial(int n){ // n * (n-1) * (n-2)*.....*1

        // if(n==0 || n==1){
        //     return 1;
        // }else
        // {
        //     return n * factorial(n-1);
        // }
        

        long long fact = 1;
        for( int i=1; i<=n;i++){
            fact*=i;
        }
        return fact;
    }

    // n
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5  5 5 5 5
    // 6 6 6 6 6 6
    // n n n n n n n

    void patternA(int n){
        //Loop for row
        for(int i=1; i<=n;i++){
            //Nested For Loop
            //Loop for Column
            for(int j=1;j<=i;j++){
                // printf("%d",j);
                printf("%d",i);
            }
            printf("\n");
        }

    }
    void fibonacci(int n){

        int sum=1;
        int first =0, second =1,next;
        for(int i=0;i<n;i++){
            next=first+second;
            first=second;
            second=next;
            sum+=next;

            printf("%d\n",next);

        }

            printf("%d\n",sum);

    }
    int GCD(int a,int b){
        while (b!=0)
        {
            int temp = b;
            b=a%b;
            a=temp;
            
        }
        return a;

    }
    int gcdOfThreeDigits(int a,int b,int c){

        return GCD(GCD(a,b),c);
    }
    int LCM(int a,int b){
        return a*b/GCD(a,b);
    }

int main(){
    int sum = add(2,6,9);

    // printf("%d",sum);

    // printf("%f", div(9,5));
    // printf("%f\n",c2f(25));

    // sum  of series (1+2+3+4+...+n)
    // printf("%d", sumOfSeries(840));
    // isLeap(2028);
    // printf("%d",factorial(10));
    // printf("%lld",factorial(30));
    // patternA(10);
    int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // fibonacci(n);
//    printf("%d",gcdOfThreeDigits(10,20,30));
   printf("%d",LCM(100,20));


}