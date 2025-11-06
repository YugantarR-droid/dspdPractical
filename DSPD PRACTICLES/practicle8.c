#include <stdio.h>
#include <stdlib.h>

int main() {
    int vertex, edges;
    int i, j = 0;
    int u, v;

    printf("enter number of vertex and edges ");
    scanf("%d", &vertex);
    scanf("%d", &edges);
    printf("\n");

    int mat[vertex][vertex];
    for (i = 0; i < vertex; i++) {
        for (j = 0; j < vertex; j++) {
            mat[i][j] = 0;
        }
    }

    printf("enter edges\n");
    for (i = 0; i < edges; i++) {
        scanf("%d", &u);
        scanf("%d", &v);
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    printf("\n");

    printf("printing adjacency matrix\n");
    for (i = 0; i < vertex; i++) {
        for (j = 0; j < vertex; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 