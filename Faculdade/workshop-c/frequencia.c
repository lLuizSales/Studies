#include <stdio.h>

void contaFrequencia(int n, int array[]){

    for (int i = 0; i < n; i++){

        int contado = 0;

        for(int j = 0; j < i; j++){

            if(array[j] == array[i]){

                contado = 1;

                break;

            }
        }
        

        if(!contado){

            int contando = 1;

            for(int j = 1 + i; j < n; j++){

                if(array[j] == array[i]){

                    contando++;

                }

            }

            printf("%d\n", contando);

        }
    }

}


int main() {
    int n;
    
    // leitura de n
    scanf("%d", &n);

    // declaração do array
    int array[n];

    // leitura dos elementos
    for(int i = 0; i < n; i++){
        
        scanf("%d", &array[i]);

    }

    contaFrequencia(n, array);
    
    return 0;
}