#define N 10

int adjacent[N][N] = {
0, 0, 0, 1, 1, 0, 1, 1, 0, 0,
0, 0, 0, 1, 0, 1, 0, 0, 0, 0,
0, 0, 0, 0, 1, 0, 0, 1, 0, 1,
1, 1, 0, 0, 0, 1, 0, 0, 0, 0,
1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
0, 1, 0, 1, 0, 0, 0, 0, 1, 1,
1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
1, 0, 1, 0, 0, 0, 0, 0, 1, 0,
0, 0, 0, 0, 0, 1, 0, 1, 0, 1,
0, 0, 1, 0, 0, 1, 1, 0, 1, 0
};
int parent[N] = {0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, };
