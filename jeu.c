#include <stdio.h>
#include <stdlib.h>

void enter_name(){
	char *name;
	int i = 1;
	printf(" Entre ton nom de rappeur\n");
	scanf(" %s", name);
	printf(" \nBienvenue %s dans rentre dans le cercle \n\n", name);
	printf(" pour demarer votre nouvelle carriere de rappeur,\n veuillez vous diriger dans une des directions proposer,\n vous rencontrerez peut-etre un de vos adversaire\n\n\n");

	direction();
}

void combat(){ 
	char eminem[6];
	char damso[5];

	eminem[0] = 'E';
	eminem[1] = 'M';
	eminem[2] = 'I';
	eminem[3] = 'N';
	eminem[4] = 'E';
	eminem[5] = 'M';

	damso[0] = 'D';
	damso[1] = 'A';
	damso[2] = 'M';
	damso[3] = 'S';
	damso[4] = 'O';

	printf("%s\n%s\n",eminem ,damso);








}

void direction(){
	int direction;

	printf(" Choisissez 1.Est, 2.Ouest, 3.Sud, 4.Nord\n\n");
	scanf(" %d", &direction);

	switch(direction){
		case 1:
		printf(" Vous allez a l'ESt\n");
		combat();
		break; 

		case 2:
		printf(" Vous allez a l'Ouest\n");
		break;

		case 3:
		printf(" Vous allez au Sud\n");
		break;

		case 4:
		printf(" Vous allez au Nord\n");
		break;

		default:
		printf(" veuillez entrer un nombre valide\n");
		break;
	}
}


void main_menu_choice(){
	int reponse = 0;

	printf( "MAIN MENU\n1. Create New Game\n2. Load Save Game\n3. About\n4. Exit\n");
	scanf("%d", &reponse);
	

	switch(reponse){
		case 1:
		enter_name();
	 	break;
	 	
	 	case 2:
	 	printf(" Charge Game\n");
	 	break;

	 	case 3:
	 	printf(" Parameter\n");
	 	break;

	 	case 4:
	 	printf(" Quit Game\n");
	 	break;

	 	default:
	 	printf(" enter a valid number\n");
	 	break;
	}
}






int main(int argc, char const *argv[])
{

	main_menu_choice();

	return 0;
}