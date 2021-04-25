#pragma once
extern const double pi = 3.1415926535897932384626433832795;

double e(double accuracy = 365) //euler's constant
{
    double output = 1;
    double base = ((1 / accuracy) + 1);
    for (accuracy; accuracy != 0; accuracy--)
    {
        output = output * base;
    }
    return output;
}
double exponent(double base, int exponent) //does not yet support decimal exponents
{
    double output = 1;
    for (exponent; exponent != 0; exponent--)
    {
        output = output * base;
    }
    return output;
}

double factorial(int fa) //does not yet support decimal factorials
{
    double output = 1;
    for (fa; fa != 0; fa--)
    {
        {output = output * fa; }
    }
    return output;
}

double truf_ln(double base, int accuracy = 100)  
{
    double output_fraction = 1;
    for (int k = 0; k < accuracy; k++)
    {
        double in_frac = (base - 1) / (base + 1);
        double odd_num = (2 * k) + 1;
        double fraction = 1;
        for (odd_num; odd_num != 0; odd_num--)
        {
            fraction = fraction * in_frac; 
        }
        odd_num = (2 * k) + 1;
        fraction *= 1 / odd_num;
        output_fraction += fraction;
    }
    return (output_fraction * 2) - 2;
}

// why did I do this? its only to add easing to the text!
double truf_cos(double base, int accuracy = 20)
{
    double final_output = 0;
    int a = base;
    if (((a % 90) == 0) && ((a % 180) != 0) && base != 0) { return 0; } //For avoiding errors on 0`s
    base = base * (pi / 180);   //convert to radian
    for (int k = 0; k < accuracy; k++)
    {
        double numerator = -1 * (((k % 2) * 2) - 1);    // (-1)^k in the power series
        double denominator(1), multiplier(1);
        double fa = 2 * k;

        for (fa; fa != 0; fa--)
        {
            {denominator = denominator * fa; }  // (2k)! in the power series
        }

        fa = 2 * k;
        for (fa; fa != 0; fa--)
        {
            multiplier = multiplier * base; // x^k in the power series
        }

        final_output += (numerator * multiplier) / denominator;
    }
    return final_output;
}

double truf_sin(double base = 5, int accuracy = 15)
{
    double final_output = 0;
    int a = base;
    if (((a % 180) == 0) && base != 0) { return 0; }    //For avoiding errors on 0`s
    base = base * (pi / 180);   //convert to radian
    for (int k = 0; k < accuracy; k++)
    {
        double numerator = -1 * (((k % 2) * 2) - 1);    // (-1)^k in the power series
        double denominator(1), multiplier(1);
        double fa = (2 * k) + 1;

        for (fa; fa != 0; fa--)
        {
            {denominator = denominator * fa; }  // (2k)! in the power series
        }

        fa = (2 * k) + 1;
        for (fa; fa != 0; fa--)
        {
            multiplier = multiplier * base; //x ^ k+1 in the power series
        }

        final_output += (numerator * multiplier) / denominator;
    }
    return final_output;
}

