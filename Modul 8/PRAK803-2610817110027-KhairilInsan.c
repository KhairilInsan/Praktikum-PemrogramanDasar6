#include <stdio.h>

struct Participant
{
    char name[50];
    int age;
    int score;
};

void showParticipant(struct Participant *p)
{
    printf("Data Peserta:\n");
    printf("Nama : %s", p->name);
    printf("Umur : %d tahun\n", p->age);
    printf("Skor : %d\n", p->score);
}

int main(void)
{
    struct Participant p;

    printf("Nama : ");
    fgets(p.name, sizeof(p.name), stdin);
    printf("Umur : ");
    scanf("%d", &p.age);
    printf("Skor : ");
    scanf("%d", &p.score);

    showParticipant(&p);

    return 0;
}