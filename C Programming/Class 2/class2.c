#include <stdio.h>
int main(){
    int x,y;
    // assignment
    x=7;
    y=5;

    //Addition
    int z= x + y;
    // printf("Z = %d\n", z);

    //Subtraction
    float a = x - y;
    // printf("a = %f\n", a);

    //Multiplication
    int b = x * y;
    // printf("b = %d", b);

    //Division


    float sweets= 378, students =40;
    
    float perStudent = sweets / students;

    // printf("%f", perStudent );


    int father =9;
    int son = 2;

    father += 10; //  father = father + 10;
    son +=10; //  son = son + 10 ;

    // printf("F= %d,\nS= %d\n", father, son);


    father -= 10; //  father = father - 10;
    son -=10; //  son = son - 10 ;

    // printf("F= %d,\nS= %d \n", father, son);


    father *= 10; //  father = father * 10;
    son *=10; //  son = son * 10 ;

    // printf("F= %d,\nS= %d \n", father, son);

    father /= 10; //  father = father / 10;
    son /=10; //  son = son / 10 ;

    // printf("F= %d,\nS= %d\n", father, son);

    int cal = father % son;
    // printf("Cal = %d", cal);
        int year = 2029;
        int leap = year % 4;
        // printf("Leap = %d", leap);

        int let = 18;
                // printf("%d\n", let);
        // let %= 4;
        // printf("%d", let %= 4);

        let = let +1;
        // printf("%d\n", let);

        let +=1;
        // printf("%d\n", let);

        // increment 
        // ++
        let++;
        // printf("%d\n", let);

        // Decrement
        // --
        let--;
        // printf("%d\n", let);

        int w = 6;
        w++;

        printf("%d\n", w);
        w--;
        
        printf("%d\n", w);


}