#include <stdio.h>

int main() {
    int N, M;
    printf("Enter N  and M : ");
    scanf("%d %d", &N, &M);

    int galaxy[N][M];
    printf("Enter the number of moons for each planet:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &galaxy[i][j]);
        }
    }

    int max_moons = 0;
    for (int i = 0; i < N; i++) {
        int total_moons = 0;
        for (int j = 0; j < M; j++) {
            total_moons += galaxy[i][j];
        }
        if (total_moons > max_moons) {
            max_moons = total_moons;
        }
    }

    printf("The maximum number of moons in any solar system is: %d\n", max_moons);
    return 0;
}
