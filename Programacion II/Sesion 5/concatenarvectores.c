#include <stdio.h>
#include <stdlib.h>

int* ConcatenaVectores(int* vct1, int dim1, int* vct2, int dim2) {
    int* vct3 = malloc((dim1 + dim2) * sizeof(int));

    for (int i = 0; i < dim1; i++) {
        vct3[i] = vct1[i];
    }

    for (int i = 0; i < dim2; i++) {
        vct3[dim1 + i] = vct2[i];
    }

    return vct3;
}

int* LeerVector(int dim) {
    int* vct = malloc(dim * sizeof(int));

    for (int i = 0; i < dim; i++) {
        printf("Introduzca el elemento %d del vector: ", i + 1);
        scanf("%d", &vct[i]);
    }

    return vct;
}

void PresentaVector(int* vct, int dim) {
    printf("El vector es: { ");

    for (int i = 0; i < dim; i++) {
        printf("%d ", vct[i]);
    }

    printf("}\n");
}

int main() {
    int dim1, dim2;
    printf("Introduzca la dimension del primer vector: ");
    scanf("%d", &dim1);

    int* vct1 = LeerVector(dim1);
    PresentaVector(vct1, dim1);

    printf("Introduzca la dimension del segundo vector: ");
    scanf("%d", &dim2);

    int* vct2 = LeerVector(dim2);
    PresentaVector(vct2, dim2);

    int* vct3 = ConcatenaVectores(vct1, dim1, vct2, dim2);
    PresentaVector(vct3, dim1 + dim2);

    free(vct1);
    free(vct2);
    free(vct3);

    return 0;
}
