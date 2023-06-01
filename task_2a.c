#include <stdio.h>

void appendToFile(const char* fileName, const char* text) {
    FILE* file = fopen(fileName, "a"); // Відкриваємо файл у режимі дозапису ("a")
    if (file == NULL) {
        printf("Не вдалося відкрити файл.\n");
        return;
    }

    fprintf(file, "%s", text); // Дозаписуємо рядок до файлу
    fclose(file); // Закриваємо файл
}

int main() {
    const char* fileName = "file.txt";
    const char* text = "Додатковий текст для дозапису.";

    appendToFile(fileName, text);
    printf("Рядок був дозаписаний до файлу '%s'.\n", fileName);

    return 0;
}