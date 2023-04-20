

#include <iostream>
#include <string>

char iSelecFuntion();
void dInputValue(double& a);
double dSumfunction(double a, double b);
double dSubtracfunction(double a, double b);
double dMultipleFuntion(double a, double b);
double dDevideFunction(double a, double b);
int main()
{
    do
    {
        system("cls");
        char choise = iSelecFuntion();
        if (choise == 'e')
        {
            std::cout << "See you again" << std::endl;
            goto out;
        }
        double dNumber1;
        double dNumber2;
        dInputValue(dNumber1);
        dInputValue(dNumber2);
        switch (choise)
        {
        case '+':
            std::cout << dNumber1 << " + " << dNumber2 << " = ";
            std::cout << dSumfunction(dNumber1, dNumber2) << std::endl;
            break;
        case '-':
            std::cout << dNumber1 << " - " << dNumber2 << " = ";
            std::cout << dSubtracfunction(dNumber1, dNumber2) << std::endl;
            break;
        case '*':
            std::cout << dNumber1 << " * " << dNumber2 << " = ";
            std::cout << dMultipleFuntion(dNumber1, dNumber2) << std::endl;
            break;
        case '/':
            if (dDevideFunction(dNumber1, dNumber2)== NULL)
            {
                break;
            }
            else
            {
                std::cout << dDevideFunction(dNumber1, dNumber2) << std::endl;
                std::cout << dNumber1 << " / " << dNumber2 << " = ";
            }
            break;
        case 'e':
            std::cout << "See you again" << std::endl;
            return 0;
        default:
            std::cout << "ban nhap khong hop le." << std::endl;
            break;
        }
        bool isContinue;
        std::cout << "ban co muon thu lai hay khong?(0/1)";
        std::cin >> isContinue;
        if (!isContinue)
        {
            std::cout << "See you again" << std::endl;
            break;
        }
    } while (true);
    out:
        return 0;
}

char iSelecFuntion()
{
    system("cls");
    char select;
    std::cout << "+" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "/" << std::endl;
    std::cout << "e. exit the program" << std::endl;
    std::cin >> select;
    return select;
}

void dInputValue(double& a)
{
    std::cout << "nhap gia tri: ";
    std::cin >> a;
}

double dSumfunction(double a, double b)
{
    return a+b;
}

double dSubtracfunction(double a, double b)
{
    return a-b;
}

double dMultipleFuntion(double a, double b)
{
    return a*b;
}

double dDevideFunction(double a, double b)
{
    if (b==0)
    {
        std::cout << "khong the chia cho 0" << std::endl;
        return NULL;
    }
    return a/b;
}
