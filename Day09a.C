/*Functions Challenge: Greatest Common Divisor(GCD), Absolute Value, Square Root*/

#include <stdio.h>

int gcd (int u, int v);
float absoluteValue(float x);
float squareRoot(float x);

int main(){
    int result = 0;
    float absoluteValueResult = 0;
    float f1 = -72.4;

    /*Testing GCD Function*/
    result = gcd(1024,736);
    printf("The GCD of 1024 and 736 is: %d\n\n", result);

    /*Testing Absolute Value Function*/
    absoluteValueResult = absoluteValue(f1);
    printf("Result = %.2f\n", absoluteValueResult);
    printf("f1 = %.2f\n",f1);

    /*Testing Square Root*/
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(25));

    return 0;
}

int gcd (int u,int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    return u;
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

    return x;
}

float squareRoot(float x)
{
    const float epsilon = 0.00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (x < 0)
    {
        printf("\nNegative argument to Square Root\n");
        returnValue = -1.0;
    }

    if (returnValue != -1.0)
    {
        while (absoluteValue (guess*guess - x) >= epsilon)
            guess = (x / guess + guess) / 2.0;
        
        returnValue = guess;
    }
    
    return returnValue;
}
