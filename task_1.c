
#include <stdio.h>

int main() {
    FILE *f, *g;
    int number;

    // Відкриваємо вхідний файл для читання
    f = fopen("f.txt", "r");
    if (f == NULL) {
        printf("Не вдалося відкрити файл f.txt\n");
        return 1;
    }

    // Відкриваємо вихідний файл для запису
    g = fopen("g.txt", "w");
    if (g == NULL) {
        printf("Не вдалося відкрити файл g.txt\n");
        fclose(f);
        return 1;
    }

    // Читаємо числа з файлу f і записуємо парні числа в файл g
    while (fscanf(f, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(g, "%d\n", number);
        }
    }

    // Закриваємо файли
    fclose(f);
    fclose(g);

    printf("Операція завершена. Результати записані у файл g.txt\n");

    return 0;
}