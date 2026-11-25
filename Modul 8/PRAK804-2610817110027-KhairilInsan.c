#include <stdio.h>

struct Participant
{
    char name[50];
    int age;
    int score;
};

void showParticipant(struct Participant *p)
{
    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", p->name, p->score);
}

int main(void)
{
    struct Participant p[10];
    int n;
    int best = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", p[i].name);
        scanf("%d", &p[i].age);
        scanf("%d", &p[i].score);
    }

    for (int i = 1; i < n; i++)
    {
        if (p[i].score > p[best].score)
        {
            best = i;
        }
    }

    showParticipant(&p[best]);

    return 0;
}