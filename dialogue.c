#include <stdio.h>

int main() {
    char name[50];
    int hp;
    float mana;

    printf("Введите имя студента: ");
    scanf("%s", name);

    printf("Введите HP: ");
    scanf("%d", &hp);

    printf("Введите Ману: ");
    scanf("%f", &mana);

    printf("%s, у тебя HP = %d, Мана = %.2f\n", name, hp, mana);

    return 0;
}
