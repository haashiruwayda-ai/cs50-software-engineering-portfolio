#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{float d;
do
{
    d =  get_float("Amount of Change:");
}
while(d <= 0);


int counter = 0;
while (d >= 25)
{
    d = d - 25;
    counter++;
}
while (d >= 10)
{
    d = d - 10;
    counter++;
}
while (d >= 5)
{
    d = d - 5;
    counter++;
}
while (d >= 1)
{
    d = d - 1;
    counter++;
}
printf("%d\n", counter);
}
