

#include <stdio.h>
#include <math.h>
#include <time.h>

struct rgAgora{
    int dia,mes, ano;
};

int main(void){
    //CAPTURANDO A DATA DO SITEMA
    time_t currentTime;
    struct tm *timeinfo;
    currentTime = time(NULL);
    timeinfo = localtime(&currentTime);

    //VARIAVEIS DA DATA
    int dia, mes, ano;

    dia = timeinfo->tm_mday;
    mes = timeinfo->tm_mon;
    ano = timeinfo->tm_year + 1900;

    //CALCULANDO A IDADE

        //CAPTURANDO DATA DE NASCIMENTO DO USUARIO
    int dia_nascimento, mes_nascimento, ano_nascimento;

    //CAPUTURANDO DIA DE NASCIMENTO
    printf("Digite seu dia de nascimento: Ex(25)\n");
    scanf("%i", &dia_nascimento);

        //VALIDANDO SE O USUARIO RESPEITOU OS LIMITE DE DIAS
    if(dia_nascimento >= 31 || dia_nascimento < 0){
        printf("Valor nao aceito.\n");
        exit(0);
    }

    //CAPTURANDO MES DE NASCIMENTO
    printf("Digite seu mes de nascimento: Ex(08) \n");
    scanf("%i", &mes_nascimento);

        //VALIDANDO SE O USUARIO RESPEITOU OS LIMITE DE MESES
    if(mes_nascimento >= 12 || mes_nascimento < 0){
        printf("Valor nao aceito.\n");
        exit(0);
    }

    //CAPTURANDO ANO DE NASCIMENTO
    printf("Digite seu dia de nascimento: Ex(1999)\n");
    scanf("%i", &ano_nascimento);
        //VALIDANDO SE O USUARIO RESPEITOU OS LIMITE DE ANOS
    if(ano_nascimento >= 2021 || ano_nascimento < 1900){
        printf("Valor nao aceito.\n");
        exit(0);
    }

    //CONVERTENDO A DATA OBTIDA PELA MÁQUINA PARA DIAS CORRIDOS E CALCULANDO PELOS DIAS CORRIDOS DESDE O NASCIMENTO
    int idade = (((ano*365) + (mes*30) + dia) - ((ano_nascimento*365) + (mes_nascimento*30) + dia_nascimento)+34) / 365;
    
    //RETORNANDO PARA O USUARIO SE ELE É OU NÃO MAIOR DE IDADE
    if(idade >= 18) {
        printf("Voce e maior de idade!");
        exit(0);
    }else{
        printf("Voce NAO e maior de idade!");
    }

    return 0;
};
