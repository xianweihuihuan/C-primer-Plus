#include "test12-3-a.h"
int mode1 = 0;
double kil = 0;
int sp = 0;
double an = 0;
void set_mode(int mode)
{
    mode1 = mode;
    if (mode1 == 0 || mode1 == 1)
    {
        sp = mode1;
    }
    else
    {
        if (sp == 0)
        {
            printf("Invalid mode specified. Mode 0 (metric) used.\n");
        }
        if (sp == 1)
        {
            printf("Invalid mode specified. Mode 1 (US) used.\n");
        }
        mode1 = sp;
    }
}
void get_info()
{
    if (mode1 == 0)
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%lf", &kil);
        printf("Enter fuel consumed in liters:");
        scanf("%lf", &an);
    }
    if (mode1 == 1)
    {
        printf("Enter distance traveled in miles:");
        scanf("%lf", &kil);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf", &an);
    }
}
void show_info()
{
    if (mode1 == 0)
    {
        double newn = an / (kil / 100);
        printf("Fuel consumption is %.2lf liters per 100 km", newn);
    }
    if (mode1 == 1)
    {
        double newn = kil / an;
        printf("Fuel consumption is %.1lf miles per gallon.", newn);
    }
}