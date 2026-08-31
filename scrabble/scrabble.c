#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void)
{string n;
 string w;
n = get_string("Player 1: ");
w = get_string("Player 2: ");
int name[] ={ 1, 3, 3, 2, 1, 4,	2, 4, 1, 8,	5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

int nlen = strlen(n);
int wlen = strlen(w);

int score1 = 0;
for (int i = 0; i < nlen ; i++)
{
    int c = toupper(n[i]) - 'A';
    score1 = score1 + name[c];
}

int score2 = 0;
for (int i = 0; i < wlen; i++)
{
    int c = toupper(w[i]) - 'A';
    score2 = score2 +name[c];
}

if (score1 > score2)
{
    printf("Player 1 wins!\n");
}
else if (score1 < score2)
{
    printf("Player 2 wins!\n");
}
else if (score1 == score2)
{
    printf("Tie!\n");
}

}
