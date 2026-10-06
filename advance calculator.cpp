/*
It is a advance calculator with the help of diffrent libraries like string,maths and arrays which used to store history.
            FEATURES
            has more operation like trignometry, logarithm,exponential and inverse trigonometry
            can run in loop as your need
            at the end of program you have chance to see the history

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <cmath>

int main()
{
    /*here we fix the value pi as it is equal to cos invetrse -1 */
    const double pi = std::acos(-1.0);
    /* fixing the size of arrray where 100 history can store*/
    const int maxhistory = 100;
    std::string history[maxhistory];
    int historycount = 0;
    /* instruction
     */
    std::string add, sub, mul, div, exp, cosec, sec, cot, log, log_again;
    std::cout << "this is just a advance calculator\n according to your operation which you want choose the word and please read instruction." << std::endl;
    std::cout << "\t \t \t INSTRUCTION" << std::endl;
    std::cout << "\"add\" for additon \n \"sub\" for subtraction\n \"mul\" for multiplication \n \"div\" for division \n \"exp\" for exponent " << std::endl;
    std::cout << " for trigonometry enter \"trigo\"" << std::endl;
    std::cout << " for inverse trigonometry enter \"inv\"" << std::endl;
    std::cout << " for finding log of any value enter \"log\"" << std::endl;

    float a, b, c, d, e, f, g, itrigo_value;
    std::string input, yes, no, again, trigo, trigofn, itrigo;
    double angle, new_angle;
    do
    { /* taking input of the operation */
        std::cout << "enter the operation you want to do" << std::endl;
        std::cin >> input;
        if (input == "add" || input == "sub" || input == "mul" || input == "div")
        { /* as these mathematic operation mainly use 2 input so seperate it*/
            std::cout << "enter the numbers in which you want to do operation by pressing enter after each number " << std::endl;
            std::cin >> a;
            std::cin >> b;
            if (input == "add")
            {
                std::cout << a << "+" << b << "=" << a + b << std::endl;
                history[historycount++] = std::to_string(a) + " + " + std::to_string(b) + " = " + std::to_string(a + b);
            }
            if (input == "sub")
            {
                std::cout << a << "-" << b << "=" << a - b << std::endl;
                history[historycount++] = std::to_string(a) + " - " + std::to_string(b) + " = " + std::to_string(a - b);
            }
            if (input == "mul")
            {
                std::cout << a << "*" << b << "=" << a * b << std::endl;
                history[historycount++] = std::to_string(a) + " * " + std::to_string(b) + " = " + std::to_string(a * b);
            }
            if (input == "div")
            {
                std::cout << a << "/" << b << "=" << a / b << std::endl;
                history[historycount++] = std::to_string(a) + " / " + std::to_string(b) + " = " + std::to_string(a / b);
            }
        }
        else if (input == "trigo")
        { /* for trigonometry taking angle and it is in radian so i change it in degree */
            std::cout << "enter input like sin,cos,etc..\n " << std::endl;
            std::cin >> trigofn;
            std::cout << "enter the angle \n *AND PUT ALL THE ANGLES IN DEGREE*" << std::endl;
            std::cin >> angle;
            new_angle = angle * pi / 180;

            if (trigofn == "sin")
            {
                std::cout << "sin" << new_angle << "=" << sin(new_angle) << "\n"
                          << std::endl;
                history[historycount++] = "sin(" + std::to_string(angle) + "°) = " + std::to_string(sin(new_angle));
            }
            else if (trigofn == "cos")
            {
                std::cout << "cos" << new_angle << "=" << cos(new_angle) << "\n"
                          << std::endl;
                history[historycount++] = "cos(" + std::to_string(angle) + "°) = " + std::to_string(cos(new_angle));
            }
            else if (trigofn == "tan")
            {
                std::cout << "tan" << new_angle << "=" << tan(new_angle) << "\n"
                          << std::endl;
                history[historycount++] = "tan(" + std::to_string(angle) + "°) = " + std::to_string(tan(new_angle));
            }
            else if (trigofn == "cosec")
            {
                std::cout << "cosec" << new_angle << "=" << 1 / sin(new_angle) << "\n"
                          << std::endl;
                history[historycount++] = "cosec(" + std::to_string(angle) + "°) = " + std::to_string(1 / sin(new_angle));
            }
            else if (trigofn == "sec")
            {
                std::cout << "sec" << new_angle << "=" << 1 / cos(new_angle) << "\n"
                          << std::endl;
                history[historycount++] = "sec(" + std::to_string(angle) + "°) = " + std::to_string(1 / cos(new_angle));
            }
            else if (trigofn == "cot")
            {
                std::cout << "cot" << new_angle << "=" << 1 / tan(new_angle) << "\n"
                          << std::endl;
                history[historycount++] = "cot(" + std::to_string(angle) + "°) = " + std::to_string(1 / tan(new_angle));
            }
            else
            {
                std::cout << "invalid input" << std::endl;
            }
        }
        else if (input == "inv")
        { /* for inverse trigonometry */
            std::cout << "enter input like asin,acos,atan,etc..\n " << std::endl;
            std::cin >> itrigo;
            std::cout << "enter the value" << std::endl;
            std::cin >> itrigo_value;

            if (itrigo == "asin")
            {
                if (itrigo_value < 1 && itrigo_value > -1)
                {
                    std::cout << "asin" << itrigo_value << "=" << std::asin(itrigo_value) << "radian" << "\n"
                              << std::endl;
                    history[historycount++] = "asin(" + std::to_string(itrigo_value) + ") = " + std::to_string(std::asin(itrigo_value)) + "radian";
                }
                else
                {
                    std::cout << "out of domain" << std::endl;
                }
            }
            else if (itrigo == "acos")
                if (itrigo_value < 1 && itrigo_value > -1)
                {
                    std::cout << "cos" << itrigo_value << "=" << std::acos(itrigo_value) << "radian" << "\n"
                              << std::endl;
                    history[historycount++] = "acos(" + std::to_string(itrigo_value) + ") = " + std::to_string(std::acos(itrigo_value)) + "radian";
                }
                else
                {
                    std::cout << "out of domain" << std::endl;
                }

            else if (itrigo == "atan")
            {
                std::cout << "tan" << itrigo_value << "=" << std::atan(itrigo_value) << "radian" << "\n"
                          << std::endl;
                history[historycount++] = "atan(" + std::to_string(itrigo_value) + "°) = " + std::to_string(std::atan(itrigo_value)) + "radian";
            }
            else if (itrigo == "acosec")
            {
                std::cout << "cosec" << itrigo_value << "=" << 1 / std::sin(itrigo_value) << "radian" << "\n"
                          << std::endl;
                history[historycount++] = "acosec(" + std::to_string(itrigo_value) + "°) = " + std::to_string(1 / std::asin(itrigo_value)) + "radian";
            }
            else if (itrigo == "asec")
            {
                std::cout << "sec" << itrigo_value << "=" << 1 / std::cos(itrigo_value) << "radian" << "\n"
                          << std::endl;
                history[historycount++] = "asec(" + std::to_string(itrigo_value) + "°) = " + std::to_string(1 / std::acos(itrigo_value)) + "radian";
            }
            else if (itrigo == "acot")
            {
                std::cout << "cot" << itrigo_value << "=" << 1 / std::tan(itrigo_value) << "radian" << "\n"
                          << std::endl;
                history[historycount++] = "acot(" + std::to_string(itrigo_value) + "°) = " + std::to_string(1 / std::atan(itrigo_value)) + "radian";
            }
            else
            {
                std::cout << "invalid input" << std::endl;
            }
        }
        else if (input == "exp")
        {
            std::cout << "enter the base and exponent" << std::endl;
            std::cin >> c;
            std::cin >> d;
            std::cout << c << "^" << d << "=" << pow(c, d) << std::endl;
            history[historycount++] = std::to_string(c) + "^" + std::to_string(d) + " = " + std::to_string(pow(c, d));
        }
        /* here we find log with base and value with the correcting domain like base>0 and not equal to 1*/
        else if (input == "log")
        {

            std::cout << "enter  base and then value " << std::endl;
            std::cin >> e;
            std::cin >> f;
            if (e < 0 || e == 1)
            {
                std::cout << "base of log cannot be negative or 1\n \t \t INVALID INPUT" << std::endl;
            }
            else if (f <= 0)
            {
                std::cout << "inside log can't be a negative or 0 input \n \t \t INVALID INPUT" << std::endl;
            }
            else
            {
                std::cout << "log " << f << " to the base " << e << " is " << std::log(f) / std::log(e) << std::endl;
                history[historycount++] = "log " + std::to_string(f) + " to the base " + std::to_string(e) + " is " + std::to_string(std::log(f) / std::log(e));
            }
        }
        /* here for the invalid input or any error in providing input*/
        else
        {
            std::cout << "invalid input" << std::endl;
        }
        /* here to run the do while loop as it runs min 1 time */

        std::cout << "do you want to continue the use of calculator??\n answer in yes or no" << std::endl;
        std::cin >> again;
    } while (again == "yes");
    /* for seeing the history */
    std::cout << "do you want to see the history of your operations??\n answer in yes or no" << std::endl;
    std::cin >> yes;
    if (yes == "yes")
    {
        if (historycount == 0)
        {
            std::cout << "No operations performed yet." << std::endl;
        }
        else
        {
            std::cout << "History of your operations: " << std::endl;
            for (int i = 0; i < historycount; i++)
            {
                std::cout << history[i] << std::endl;
            }
        }
    }
    std::cout << "calculator end " << std::endl;
    return 0;
}