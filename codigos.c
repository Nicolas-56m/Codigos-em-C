```c
#include <stdio.h>
	
int main() {
     char nome[50];
     int idade;
	
     printf("Digite seu nome: ");
     scanf("%49s", nome);
    
     printf("Digite sua idade: ");
     scanf("%d", &idade);

     printf("\nSeu nome eh %s, e sua idade eh %d", nome, idade);
	  
     return 0;
}
```


```c
#include <stdio.h>
	
int main() {
    int n1, n2, soma, multiplicacao, subtracao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
	 
    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
   	 
    printf("\nA soma dos 2 numeros: %d\n", soma);
    printf("\nA subtracao dos 2 numeros: %d\n", subtracao);
    printf("\nA multiplicacao dos 2 numeros: %d\n", multiplicacao);
	   
    return 0;
}
```


```c
#include <stdio.h>
	
int main() {
    char nome[50];
    float media;
    int n1, n2;
	
    printf("Digite o nome do aluno: ");
    scanf("%49s", nome);

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);

    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
	   
    media = (n1 + n2) / 2.0;
	
    printf("\nO nome do aluno eh %s e sua nota eh %.2f", nome, media);
	
    return 0;
}
```


```c
#include <stdio.h>
	
int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9.0/5.0) + 32;
	
    printf("\nA temperatura convertida em Fahrenheit eh: %.2f", fahrenheit);
		   
    return 0;
}
```


```c
#include <stdio.h>
	
int main() {
    char sexo[20];
    float altura;
    int idade;
    
    printf("Digite seu sexo (Masculino ou Feminino): ");
    scanf("%19s", sexo);
    
    printf("Digite sua altura (com ponto, ex: 1.70): ");
    scanf("%f", &altura);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
      
    printf("\nSeu sexo eh %s, sua altura eh %.2f, e sua idade eh %d", sexo, altura, idade);
		   
    return 0;
}
```


```c
#include <stdio.h>

int main() {
	int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("\nSua idade eh: %d", idade);
    
	return 0;			 			 
}
```


```c
#include <stdio.h>

int main() {
	int n1, n2, soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    
    printf("\nSua soma eh: %d", soma);
    
	return 0;			 			 
}
```


```c
##include <stdio.h>

int main() {
	float n1, n2,media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    media = (n1 + n2) / 2;
    
    printf("\nSua media eh: %f", media);
    
	return 0;			 			 
}
```


```c
#include <stdio.h>

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf("%c", &letra);
    
    printf("\nSeu caractere eh: %c", letra);
    
	return 0;			 			 
}
```


```c
#include <stdio.h>

int main() {
	int num, an, su;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    an = num - 1;
    su = num + 1;
    
    printf("\nO antecessor do seu numero eh: %d, e o sucessor do seu numero eh %d", an, su);
    
	return 0;			 			
}
```


```c
#include <stdio.h>

int main() {
	float s, au;

    printf("Digite seu salario: ");
    scanf("%f", &s);
    
    au = s + (s * 0.10);
    
    printf("\nSeu novo salario com aumento de 10%% eh: %.2f", au);
    
	return 0;			 			
}
```


```c
#include <stdio.h>

int main() {
	int l, a, ar = 0;

    printf("Digite a largura do retangulo: ");
    scanf("%d", &l);
    
    printf("Digite a area do retangulo: ");
    scanf("%d", &a);
    
    ar = l * a;
    
    printf("\nA area do seu retangulo eh: %d", ar);
    
	return 0;			 			
}
```


```c
#include <stdio.h>

int main() {
	char nome[50];
	float preco, valor = 0;
	int quan;

    printf("Digite o nome do produto: ");
    scanf("%49s", &nome);
    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    
    printf("Digite a qauntidade do produto: ");
    scanf("%d", &quan);
    
    valor = preco * quan;
    
    printf("\nO nome do produto eh: %s, o valor da compra eh de: %.2f", nome, valor);
    
	return 0;			 			
}
```


```c
#include <stdio.h>
	
int main() {
    int num;
    
    printf("Digite o numero: ");
    scanf("%d", &num);
    
    if (num > 0) 
    {
        printf("Positivo\n");
    }
    else if (num < 0)
    {
        printf("Negativo\n");
    }
    else 
    {
        printf("Eh zero (0)\n");
    }
	 	  
    return 0;
}
```


```c
#include <stdio.h>

int main() {
    int media, num;

    printf("Digite a media do aluno: ");
    scanf("%d", &media);

    if (media >= 7)
    {   
        printf("Aprovado\n");
    }
    else if (media >= 5)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Reprovado\n");
    }

    return 0;
}
```


```c
#include <stdio.h>

int main() {
    int n1, n2, n3;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) 
    {
        printf("\nO primeiro numero eh o maior");
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("\nO segundo numero eh o maior");
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("\nO terceiro numero eh o maior");
    }
    else
    {
        printf("\nExistem numeros iguais");
    }

    return 0;
}
```


```c
#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
	    printf("Numero Par");
    }
    else
    {
        printf("Numero Impar");

    }

    return 0;
}
```


```c
#include <stdio.h>

int main () {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("Idade Invalida");
    }
	else if (idade <= 12)
    {
        printf("Crianca");
    }
    else if (idade <= 17)
    {
        printf("Adolecente");
    }
    else if (idade <= 59)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }

    return 0;
}
```


```c
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7 (cada numero representa um dia da semana): ");
    scanf("%d", &dia);

    switch (dia)
	{
    	case 1:
		    printf("Domingo\n");
			break;
		
		case 2:
		    printf("Segunda-feira\n");
			break;
		
		case 3:
		    printf("Terca-feira\n");
			break;
			
		case 4:
		    printf("Quarta-feira\n");
			break;		 
		
		case 5:
		    printf("Quinta-feira\n");
			break;
		
		case 6:
		    printf("Sexta-feira\n");
			break;		
			
		case 7:
		    printf("Sabado\n");
			break;
			
		default:
		    printf("Opcao Invalida\n");
			break;		 
	}
	
	return 0;			 			 
}
```


```c
#include <stdio.h>

int main() {
    float n1, n2;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    printf("\n1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao)
	{
    	case 1:
		    printf("\nResultado: %.2f\n", n1 + n2);
			break;
		
		case 2:
		    printf("\nResultado: %.2f\n", n1 - n2);
			break;
		
		case 3:
		    printf("\nResultado: %.2f\n", n1 * n2);
			break;
			
		case 4:
			if (n2 == 0)
			{
				printf("\nNao eh possivel dividir por zero\n");
			}
			else
			{
				printf("\nResultado: %.2f\n", n1 / n2);
			}
			break;		 
			
		default:
		    printf("\nOpcao Invalida\n");
			break;		 
	}
	
	return 0;			 			 
}

```


```c
#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha uma opcao: \n");
    
    printf("\n1 - Hamburguer\n");
    printf("2 - Pizza\n");
    printf("3 - Refrigerante\n");
    printf("4 - Sorvete\n");
    
    printf("\nEscolha o numero das opcoes acima: ");
    scanf("%d", &opcao);
    
    switch (opcao)
	{
    	case 1:
		    printf("Anotado seu pedido do Hamburguer\n");
			break;
		
		case 2:
		    printf("Anotado seu pedido da Pizza\n");
			break;
		
		case 3:
		    printf("Anotado seu pedido do Refrigerante\n");
			break;
			
		case 4:
			printf("Anotado seu pedido do Sorvete\n");
			break;		 
			
		default:
		    printf("Opcao Invalida\n");
			break;		 
	}
	
	return 0;			 			 
}
```


```c
#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha uma opcao de 1 a 12 (cada numero representa um mes do ano): ");
    scanf("%d", &opcao);

    switch (opcao)
	{
    	case 1:
		       printf("Janeiro\n");
	      		break;
		
	   	case 2:
		       printf("Fevereiro\n");
	      		break;
		
	   	case 3:
		       printf("Marco\n");
		      	break;
			
	   	case 4:
      			printf("Abril\n");
      			break;
		
		case 5:
		    printf("Maio\n");
			break;
		
		case 6:
		    printf("Junho\n");
			break;
		
		case 7:
		    printf("Julho\n");
			break;
			
		case 8:
			printf("Agosto\n");
			break;
		
		case 9:
		    printf("Setembro\n");
			break;
		
		case 10:
		    printf("Outubro\n");
			break;
		
		case 11:
		    printf("Novembro\n");
			break;
			
		case 12:
			printf("Dezembro\n");
			break;				 
			
		default:
		    printf("Opcao Invalida\n");
			break;		 
	}
	
	return 0;			 			 
}
```


```c
#include <stdio.h>

int main() {
	int n1, n2, soma, subtracao, multiplicacao;
	float divisao;
    char opcao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    
    printf("\nEscolha um sinal como opcao para fazer a conta dos 2 numeros (Ex: +, -, etc): ");
    scanf(" %c", &opcao);
    
    switch (opcao)
	{
    	case '+':
		    printf("\nSoma(+) = %d\n", soma);
			break;
		
		case '-':
		    printf("\nSubtracao(-) = %d\n", subtracao);
			break;
		
		case '*':
		     printf("\nMultiplicacao(*) = %d\n", multiplicacao);
			break;
			
		case '/':
			if (n2 != 0)
			{
				divisao = (float) n1 / n2;
				
				printf("\nDivisao(/) = %.2f\n", divisao);
			}
			else
			{
				printf("\nErro: Divisao por zero(0))\n");
			}
			break;		 
			
		default:
		    printf("Opcao Invalida\n");
			break;		 
	}
	
	return 0;			 			 
}
```





```c
#include <stdio.h>

int main() {

....

do While 10 exercícios.. depois editar

```c
#include <stdio.h>

int main() {

    float n1, n2;
    int opcao;

    do
    {  
        printf("\n---Menu de Opções da Calculadora---\n");
        
        printf("\n1- Soma\n");
        printf("2- Subtração\n");
        printf("3- Multiplicação\n");
        printf("4- Divisão\n");
        printf("5- Sair do menu\n");
        
        printf("\nDigite um número das opções acima: ");
        scanf("%d", &opcao);
        
         if (opcao >= 1 && opcao <= 4)
         {
            printf("\nDigite o primeiro número: ");
            scanf("%f", &n1);
             printf("Digite o segundo número: ");
             scanf("%f", &n2);
         }    
        
         switch (opcao)
         {    
             case 1:
                  printf("\nO Resultado da Soma eh: %.2f\n", n1 + n2);
                  break;
             
             case 2:
                  printf("\nO Resultado da Subtração eh: %.2f\n", n1 - n2);   
                  break;
             
             case 3:
                  printf("\nO Resultado da Multiplicação eh: %.2f\n", n1 * n2);
                  break;
                  
             case 4:
                  if (n2 != 0)
                  {  
                     printf("\nO Resultado da Divisão eh: %.2f\n", n1 / n2);
                  }
                  else    
                  {
                     printf("\nNão eh possível dividir por 0\n");
                  }
                  break;
                  
             case 5:
                  printf("\nSaindo do Menu da Calculadora\n");
                  break;
             
             default:
                  printf("\nOpção Inválida\n");
                  break;
         }       
           
    } while (opcao != 5);

    return 0;
}
```
......


	
```c
#include <stdio.h>
#include <string.h>

int main() {

    char sC[7] = "Github", sD[10];
    int contador = 0, parar = 0;

    do
    {  
        printf("\nDigite a sua senha (você tem 3 tentativas): ");
        scanf("%9s", sD);
        contador++;
        
         if (strcmp(sD, sC) == 0)
         {
             printf("\nSenha Correta\n");
             parar = 1;
         }
         else
         {
             printf("\nSenha Incorreta, tente novamente!\n");
         }    
         
    }while (contador < 3 && parar == 0);
    
    if (parar == 0)
    {
        printf("\nSuas tentivas acabaram");
    }
    
    return 0;
}
```
