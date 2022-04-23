#include <stdio.h>

int main() {
    int N, V[5];
    while (scanf("%d", &N) != 0) {
        if (N == 0) {
            break;
        }

        for (int j = 0; j < N; j++) {
            int min, index, marcacoes = 0;
            for (int i = 0; i < 5; i++) {
                scanf("%d", &V[i]);
            }
            min = V[0];
            index = 0;
            for (int i = 0; i < 5; i++) {
                if (V[i] < min) {
                    index = i;
                    min = V[i];
                }
                if(V[i] <= 127) {
                    marcacoes++;
                }
            }
            if (marcacoes > 1 || marcacoes == 0) {
                printf("*\n");
                continue;
            }
            switch (index) {
                case 0:
                    printf("A\n");
                    break;
                case 1:
                    printf("B\n");
                    break;
                case 2:
                    printf("C\n");
                    break;
                case 3:
                    printf("D\n");
                    break;
                case 4:
                    printf("E\n");
                    break;
            }
        }
    }

    return 0;
}
