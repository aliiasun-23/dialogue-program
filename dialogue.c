     #include <stdio.h>

     int main() {
         char name[50];
         int hp;
         float mana;

         // Запрос имени студента
         printf("Введите ваше имя: ");
         scanf("%s", name);

         // Запрос значений HP и Мана
         printf("Введите HP: ");
         scanf("%d", &hp);
         printf("Введите Мана: ");
         scanf("%f", &mana);

         // Вывод сообщения
         printf("%s, у тебя HP = %d, Мана = %.2f\n", name, hp, mana);

         return 0;
     }
     
