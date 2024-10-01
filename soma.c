int main(int argc, char const *argv[])
{

    int indice = 12, soma = 0, k = 1;

    while(k < indice) {
        k++;
        soma = soma + k;

        printf("Loop : %i\n", k-1);
        printf("k = %i\n", k);
        printf("soma = %i\n\n", soma);
    }

    return 0;
}
