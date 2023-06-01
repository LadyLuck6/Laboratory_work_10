#include <stdio.h>

void appendToFile(const char* filename, const char* text) {
    FILE* file = fopen(filename, "a"); // Відкриваємо файл для дозапису ("a" - append mode)
    if (file == NULL) {
        printf("Помилка відкриття файлу.\n");
        return;
    }

    fprintf(file, "%s\n", text); // Записуємо рядок у файл

    fclose(file); // Закриваємо файл
}

int main() {
    const char* filename = "file.txt";
    const char* text = "Це новий рядок, який буде доданий до файлу.";

    appendToFile(filename, text);

    return 0;
}