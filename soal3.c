#include <stdio.h>
#include <string.h>

//susah kali kak
int main() {
    char inp[1001], kalimat[300][71];
    int count = 0;

    if (!fgets(inp, sizeof(inp), stdin)) return 0;
    inp[strcspn(inp, "\n")] = '\0'; 

    char *tok = strtok(inp, " ");
    while (tok && count < 300) {
        strncpy(kalimat[count], tok, 70);
        kalimat[count][70] = '\0';
        count++;
        tok = strtok(NULL, " ");
    }
    
    for (int i = 0; i < count; i++) {
        int udah = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(kalimat[i], kalimat[j]) == 0) {
                udah = 1;
                break;
            }
        }
        if (!udah) {
            printf("%s ", kalimat[i]);
        }
    }
    printf("\n");

    return 0;
}