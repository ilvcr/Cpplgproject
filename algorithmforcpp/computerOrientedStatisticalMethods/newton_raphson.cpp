/*************************************************************************
> File Name: newton_raphson.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 22时06分20秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


float e(float i){
    return (pow(i, 3)-(4*i)-9);  // original equation
}

float eq_der(float i){
    return ((3*pow(i, 2))-4);    // derivative of equation
}

void main(){
    float a, b, z, c, m, n;
    clrscr();

    for(int i=0; i < 100; i++){
        z = eq(i);
        if(z >= 0){
            b = i;
            a =--i;
            goto START;
        }
    }

    START:

    cout << "\nFirst initial: " << a;
    cout << "\nSecond initial: " << b;

    c=(a+b)/2;

    for(i=0; i < 100; i++){
        float h;
        m = eq(c);
        n = eq_der(c);

        z = c - (m / n);
        c = z;

        if(m > 0 && m < 0.009){
            goto END;
        }
    }

    END:
    cout << "\n\nRoot: " << z;
    getch();
}



