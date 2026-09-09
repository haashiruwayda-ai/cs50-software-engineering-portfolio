#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void)
{int n;
string text = get_string("Text: ");

int lettercount = 0;
for(int i = 0; text[i] != '\0'; i++ )
{
    if (isalpha(text[i]))
    {
        lettercount++;
        //printf("%d\n", lettercount);
    }
}

int wordcount = 1;
for(int j = 0; text[j] != '\0'; j++)
{
    if (isblank(text[j]))
    {
        wordcount++;
        //printf("%d\n", wordcount);
    }
}

int sentencecount = 0;
for(int k = 0; text[k] !='\0'; k++)
{
    if ((text[k]) == '!' || (text[k]) == '?' || (text[k]) == '.')
    {
        sentencecount++;
        //printf("%d\n", sentencecount);
    }
}

float S = ((float)sentencecount/(float)wordcount) * 100;
float L = ((float)lettercount/(float)wordcount) * 100;
//printf("%f\n", S);
//printf("%f\n", L);
float grade0 = 0.0588 * L - 0.296 * S - 15.8;
int grade = round(grade0);

if (grade >= 16)
{
    printf("Grade 16+\n");
}
else if (grade < 1)
{
    printf("Before Grade 1\n");
}
else
{
    printf("Grade %d\n", grade);
}

}
