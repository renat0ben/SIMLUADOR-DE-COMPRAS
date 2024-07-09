#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int c=1, qp, i, co, par, qpar;
    float v, s= 0.0, vc, vpar;
    printf("=============================================================\n");
	printf("                  SIMULADOR DE COMPRAS\n");
	printf("=============================================================\n");
	printf("Veja a tabela de produtos disponíveis abaixo e seus preços:\n\n");
	
	printf("|Código do produto | Produto      |   Valor  |\n");
	printf("--------------------------------------------\n");
	printf("|      1           |MAÇÃ     (und)|   R$2,50 |\n");
	printf("|      2           |ABACATE  (und)|   R$8,00 |\n");
	printf("|      3           |BATATA   (und)|   R$1,50 |\n");
	printf("|      4           |ARROZ    (und)|   R$4,50 |\n");
	printf("|      5           |Macarrão (und)|   R$3,50 |\n");
	printf("|      6           |Carne    (und)|   R$15,50|\n");
	printf("|      7           |Tomate   (und)|   R$1,00 |\n");
	printf("|      8           |Frango   (und)|   R$8,50 |\n");
	printf("|      9           |Açúcar   (und)|   R$3,20 |\n");
	printf("|     10           |Goiaba   (und)|   R$0,80 |\n");
	printf("--------------------------------------------\n\n\n");
	
	printf("Quantos produtos deseja comprar? ");
	scanf("%i", &i);
	while(c<=i){
	printf("================================\n");
	printf(" Digite o código do %iº produto: ", c);
	scanf("%i", &co);	
	printf("================================\n\n");
	
	switch(co){
	
	case 1:
	printf("Você selecionou o produto MAÇÃ!\n");
	printf("Digite a quantidade de MAÇÃS que deseja comprar: ");
	scanf("%i", &qp);
	printf("\n");
		v=qp*2.50;
		s=s+v;
    break;
    case 2:
	printf("Você selecionou o produto ABACATE!\n");
	printf("Digite a quantidade de ABACATES que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*8.00;
		s=s+v;
	 break;
	case 3:
	printf("Você selecionou o produto BATATA!\n");
	printf("Digite a quantidade de BATATAS que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*1.50;
		s=s+v;
	break;
	case 4:
	printf("Você selecionou o produto ARROZ!\n");
	printf("Digite a quantidade de ARROZ que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*4.50;
		s=s+v;	
	break;
		case 5:
	printf("Você selecionou o produto MACARRÃO!\n");
	printf("Digite a quantidade de MACARRÃO que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*3.50;
		s=s+v;	
	break;
		case 6:
	printf("Você selecionou o produto CARNE!\n");
	printf("Digite a quantidade de Carne que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*15.50;
		s=s+v;	
	break;
		case 7:
	printf("Você selecionou o produto TOMATE!\n");
	printf("Digite a quantidade de TOMATE que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*1.00;
		s=s+v;	
	break;
		case 8:
	printf("Você selecionou o produto FRANGO!\n");
	printf("Digite a quantidade de FRANGO que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*8.50;
		s=s+v;	
	break;	
		case 9:
	printf("Você selecionou o produto AÇÚCAR!\n");
	printf("Digite a quantidade de AÇÚCAR que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*3.20;
		s=s+v;	
	break;
		case 10:
	printf("Você selecionou o produto GOIABA!\n");
	printf("Digite a quantidade de GOIABA que deseja comprar: ");
		scanf("%i", &qp);
	printf("\n");	
		v=qp*0.80;
		s=s+v;	
	break;
	default:
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Código de produto inválido!\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
		break;
}
	c++;	
}   
   printf("---------------------------------\n");
   printf("O VALOR TOTAL DA COMPRA É: R$%.2f\n", s);
   printf("---------------------------------\n\n\n");
   
   printf("Deseja parcelar sua compara? Digite 1 para SIM e 2 para NÃO: ");
   scanf("%i", &par);
   printf("\n\n");
   if(par==1){
   printf("\nInsira a quantida de parcelas que deseja: ");
		scanf("%i", &qpar);
		printf("\n\n");

for(i=0; i<qpar; i++){
	vpar=  s/qpar;
	printf("O valor total a pagar na %i° PARCELA É: R$%.2f\n", i+1, vpar);
} 
}
	else if(par==2){
		printf("Obrigado pela compra!!\n\nSUA COMPRA TOTAL É: R$%.2f", s);
		
	}
	
	return(0);
}
