void main()
{
int codigo, quantidade;
float v;
 printf(" Se deseja CACHORRO QUENTE digite : 100\n ");
 printf("Se deseja BAURU digite : 101\n ");
 printf("Se deseja  PASTEL digite : 102\n ");	
 printf("Se deseja REFRIGERANTE digite : 103\n ");	
 printf("Se deseja SUCO digite : 104\n ");
 printf("Se deseja MISTO QUENTE digite : 105\n ");
 scanf("%d", &codigo);
 printf("Digite a quantidade:\n");
 scanf("%d", &quantidade);
 switch (codigo)
 {
 case 100:
	printf("item pedido - CACHORRO QUENTE\n");
	v = quantidade*3.00;
	printf("Total a pagar = %2.f reais", v);
    break;
case 101:
	printf("item pedido - BAURU\n");
	v = quantidade*3.50;
	printf("Total a pagar = %2.f reais", v);
	break;
case 102:
	printf("item pedido - PASTEL\n");
	v = quantidade*4.00;
	printf("Total a pagar = %2.f reais", v);
	break;
case 103:
	printf("item pedido - REFRIGERANTE\n");
	v = quantidade*4.50;
	printf("Total a pagar = %2.f reais", v);
	break;
case 104:
	printf("item pedido - SUCO\n");
	v = quantidade*5.00;
	printf("Total a pagar = %2.f reais ", v);
	break;
case 105:
	printf("item pedido - MISTO QUENTE\n");
	v = quantidade*5.50;
	printf("Total a pagar = %2.f reais ", v);
	break;
default:
	printf("Codigo nao cadastrado!!");
	break;
}
}
