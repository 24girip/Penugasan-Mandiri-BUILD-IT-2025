#include <stdio.h>
#include <string.h>

int main() {
    char inp[1001], words[300][71];
    int count = 0;

    if (!fgets(inp, sizeof(inp), stdin)) return 0;
    inp[strcspn(inp, "\n")] = '\0'; 

    char *tok = strtok(inp, " ");
    while (tok && count < 300) {
        strncpy(words[count], tok, 70);
        words[count][70] = '\0';
        count++;
        tok = strtok(NULL, " ");
    }
    
    for (int i = 0; i < count; i++) {
        int already_seen = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                already_seen = 1;
                break;
            }
        }
        if (!already_seen) {
            printf("%s ", words[i]);
        }
    }
    printf("\n");

    return 0;
}
