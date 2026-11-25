#include <stdio.h>

struct Wallet
{
    char name[50];
    int balance;
};

void topUp(struct Wallet *w, int amount)
{
    w->balance += amount;
    printf("Top up %d berhasil, saldo = %d\n", amount, w->balance);
}

void pay(struct Wallet *w, int amount)
{
    if (w->balance < amount)
    {
        printf("Bayar %d gagal, saldo tidak cukup\n", amount);
    }
    else
    {
        w->balance -= amount;
        printf("Bayar %d berhasil, saldo = %d\n", amount, w->balance);
    }
}

int main()
{
    struct Wallet w;
    int n, amount;
    char type;

    scanf("%s %d", w.name, &w.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c %d", &type, &amount);
        if (type == 'T')
            topUp(&w, amount);
        else
            pay(&w, amount);
    }

    printf("Saldo akhir %s = %d\n", w.name, w.balance);
    return 0;
}