#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

void new_seed(); 
int carta;
char *cartanaipe(int carta);
int intervalo = 52, i;
int cartas[8] = {0};
int L = 0, R = 0, dup =0, verif = 0, conti = 0;
int N = sizeof(cartas)/sizeof(int);

int main() {
    new_seed();

//loop para verifica;áo se existe numeros iguais
while(verif == 0){
  dup = 0;
    //cria as cartas:
    for(i=0; i<=8; i++){
    cartas[i] = (rand()%intervalo); //gerando numero aleatorio
    }

//verifica se possui numeros iguais
for (int L = 0; L < N-1; L += 1)
        for (int R = L + 1; R <= N; R += 1)
            if (cartas[L] == cartas[R])
            {   dup += 1;
                break;
            }

//condicao para verificar que nao tem numeros duplicados e sair ou permanecer no laço while          
if(dup == 0){
  verif = 1;
}
}

 //escrever o switch para transformar os numeros em maos

    //imprime a mao do heroi
    printf("\nSua mao: \n");
    printf("%s  %s", cartanaipe(cartas[0]), cartanaipe(cartas[1]));
    putchar('\n');

    //imprime a mao do vilao
    printf("\nMao do vilao: \n");
    printf("%s  %s", cartanaipe(cartas[2]), cartanaipe(cartas[3]));
    putchar('\n');

    //imprime a mao o flop
    printf("\nFlop: \n");
    printf("%s  %s  %s", cartanaipe(cartas[4]), cartanaipe(cartas[5]), cartanaipe(cartas[6]));
    putchar('\n');

    //condiçao para parar e continuar no pos flop
    printf("Pressione 1 para continuar para o Pos-Flop: ");
    scanf("%d", &conti);
    if(conti == 1){
      printf("%s  %s\n", cartanaipe(cartas[7]), cartanaipe(cartas[8]));
    }


return 0;

} /* end main */

void new_seed() /*gera um seed nova do random*/
{
  srand(time(NULL));
} /* end new_seed */

//transforma os numeros gerados aleatorios em cartas
char *cartanaipe(int carta)
{
    switch(carta)
  {
    case 0: return "Ah"; break;
    case 1: return "2h"; break;  
    case 2: return "3h"; break;
    case 3: return "4h"; break;
    case 4: return "5h"; break;
    case 5: return "6h"; break;
    case 6: return "7h"; break;  
    case 7: return "8h"; break;
    case 8: return "9h"; break;
    case 9: return "Th"; break;
    case 10: return "Jh"; break;
    case 11: return "Qh"; break;
    case 12: return "Kh"; break;
    case 13: return "As"; break;
    case 14: return "2s"; break;
    case 15: return "3s"; break;
    case 16: return "4s"; break;
    case 17: return "5s"; break;
    case 18: return "6s"; break;
    case 19: return "7s"; break;
    case 20: return "8s"; break;
    case 21: return "9s"; break;
    case 22: return "Ts"; break;
    case 23: return "Js"; break;
    case 24: return "Qs"; break;
    case 25: return "Ks"; break;  
    case 26: return "Ad"; break;
    case 27: return "2d"; break;
    case 28: return "3d"; break;
    case 29: return "4d"; break;
    case 30: return "5d"; break;  
    case 31: return "6d"; break;
    case 32: return "7d"; break;
    case 33: return "8d"; break;
    case 34: return "9d"; break;
    case 35: return "Td"; break;
    case 36: return "Jd"; break;
    case 37: return "Qd"; break;
    case 38: return "Kd"; break;
    case 39: return "Ac"; break;
    case 40: return "2c"; break;
    case 41: return "3c"; break;
    case 42: return "4c"; break;
    case 43: return "5c"; break;
    case 44: return "6c"; break;
    case 45: return "7c"; break;
    case 46: return "8c"; break;
    case 47: return "9c"; break;
    case 48: return "Tc"; break;
    case 49: return "Jc"; break;
    case 50: return "Qc"; break;
    case 51: return "Kc"; break;               
  } /* end switch */
}