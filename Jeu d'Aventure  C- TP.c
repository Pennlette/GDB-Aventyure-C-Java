#include <stdio.h>

int main()
{
	int decisionUn; 
	int loopUn
	int loopDeu
	int loopTroa
	int decisionDeu
	int hpMonstre
	int hpHeros
	hpHeros = 20;
	hpMonstre = 10;
	loopUn = 1;
	loopDeu = 1;
	loopTroa = 1;

	printf("Vous êtes un agent de l'empire Humain\n");
	printf("Vous êtes à la recherche d'un homme très important\n");
	printf("Vous pouvez chercher à trois endroits différents\n");
	printf("La forêt d'Eckenwald - 1\n");
	printf("Les mines de Khazark Adrin - 2\n");
	printf("La ville de Midenheim - 3\n");
	scanf("%d", &decisionUn)
	if (decisionUn == 1 )
	{
		printf("Vous arrivez dans la forêt d'Eckenwald\n");
		printf("Une forte odeur de poudre se fait sentir\n");
		printf("Soudainement, un Gor vous attaque\n");
		printf("Qu'allez vous entreprendre ?\n");
		printf("Attaquer(1) / Esquiver(2)\n");
		scanf("%d", &decisionDeu);
		while (loop == 1)
		{
			if (decisionDeu == 1)
			{
				printf("Vous utilisé votre fidele lance, vous transpercez la fine armure du Gor\n");
				printf("Le Gor perd 3 HP\n");
				hpMonstre = hpMonstre - 2;
				printf("Le Gor vous lance des pierres... C'est tres peu efficace mais tres agacant\n");
				printf("Vous perdez 2 HP\n");
				hpHeros = hpHeros - 2;
				printf("Le Gor a desormais %d HP\n", hpMonstre);
				printf("Vous avez %d HP\n", hpHeros);
				printf("Qu'allez vous entreprendre ?\n");
				printf("Attaquer(1) / Esquiver(2)\n");
				scanf("%d", &decisionDeu);
			}
			if (decisionDeu == 2)
			{
				printf("Vous roulez sur le cote avec la grace du Pelican\n");
				printf("Le Gor tente de vous toucher mais il vous frole a peine\n");
				printf("Le Gor a desormais %d HP\n", hpMonstre);
				printf("Vous avez %d HP\n", hpHeros);
				printf("Qu'allez vous entreprendre ?\n");
				printf("Attaquer(1) / Esquiver(2)\n");
				scanf("%d", &decisionDeu);
			}
			if (hpMonstre == 0)
			{
				printf("Vous terracez le Gor, Hourra !!\n");
				loopUn = 0;
			}
		}
	}


	if else (decisionUn == 2)
	{
		while (loopDeu == 1)
		{
			printf("Vous arrivez dans la mine de Khazark Adrin\n");
			printf("Une forte odeur de Souffre se fait sentir\n");
			printf("Soudainement, un goblin vous attaque\n");
			printf("Qu'allez vous entreprendre ?\n");
			printf("Attaquer(1) / Esquiver(2)\n");
			scanf("%d", &decisionDeu);
			if (decisionDeu == 1)
			{
				printf("Vous ecorchez le Goblin avec votre Hache\n");
				printf("Le Goblin perd 3 HP\n");
				hpMonstre = hpMonstre - 2;
				printf("Le Goblin vous lance des pierres... C'est tres peu efficace\n");
				printf("Vous perdez 2 HP\n");
				hpHeros = hpHeros - 1;
				printf("Le Goblin a desormais %d HP\n", hpMonstre);
				printf("Vous avez %d HP\n", hpHeros);
				printf("Qu'allez vous entreprendre ?\n");
				printf("Attaquer(1) / Esquiver(2)\n");
				scanf("%d", &decisionDeu);
			}
			if (decisionDeu == 2)
			{
				printf("Vous roulez sur le cote avec la grace de l'anguille\n");
				printf("Le Goblin tente de vous toucher mais il vous frole a peine\n");
				printf("Le Goblin a desormais %d HP\n", hpMonstre);
				printf("Vous avez %d HP\n", hpHeros);
				printf("Qu'allez vous entreprendre ?\n");
				printf("Attaquer(1) / Esquiver(2)\n");
				scanf("%d", &decisionDeu);
			}
			if (hpMonstre == 0)
			{
				printf("Vous terracez le Goblin, Hourra !!\n");
				loopDeu = 0;
			}
		}
	}		
	
	if else (decisionUn == 3)
	{
		while (loopTroa == 1)
		{
			printf("Vous arrivez dans la ville de Midenheim\n");
			printf("Une forte odeur de poisson se fait sentir\n");
			printf("Soudainement, un assassin vous attaque\n");
			printf("Qu'allez vous entreprendre ?\n");
			printf("Attaquer(1) / Esquiver(2)\n");
			scanf("%d", &decisionTroa);
			if (decisionTroa == 1)
			{
				printf("Vous placardez l'assassin avec votre arbalete\n");
				printf("L'assassin perd 3 HP\n");
				hpMonstre = hpMonstre - 2;
				printf("L'assassin vous lance des couteaux... Votre armure tient le choc\n");
				printf("Vous perdez 2 HP\n");
				hpHeros = hpHeros - 2;
				printf("L'assassin a desormais %d HP\n", hpMonstre);
				printf("Vous avez %d HP\n", hpHeros);
				printf("Qu'allez vous entreprendre ?\n");
				printf("Attaquer(1) / Esquiver(2)\n");
				scanf("%d", &decisionTroa);
			}
			if (decisionTroa == 2)
			{
				printf("Vous roulez sur le cote avec la grace de la marmotte\n");
				printf("L'assassin tente de vous toucher mais il vous frole a peine\n");
				printf("L'assassin a desormais %d HP\n", hpMonstre);
				printf("Vous avez %d HP\n", hpHeros);
				printf("Qu'allez vous entreprendre ?\n");
				printf("Attaquer(1) / Esquiver(2)\n");
				scanf("%d", &decisionDeu);
			}
			if (hpMonstre == 0)
			{
				printf("Vous terracez l'assassin, Hourra !!\n");
				loopTroa = 0;
			}
		}
	}
	if (loopUn == 0)
	{
		printf("Apres un long combat contre le Gor, vous apercevez sa taniere\n");
		printf("A l'interieur, vous retrouvez l'homme que vous cherchiez\n");
		printf("Malheureusement il s'avere qu'il n'ait pas tenu le choc\n");
		printf("THE FIN\n");
	} 

	if (loopDeu == 0)
	{
		printf("Apres un long combat contre le Goblin, vous apercevez sa taniere\n");
		printf("A l'interieur, vous retrouvez l'homme que vous cherchiez\n");
		printf("Malheureusement il s'avere qu'il n'ait pas tenu le choc\n");
		printf("THE FIN\n");
	}

	if (loopTroa == 0)
	{
		printf("Apres un long combat contre l'Assassin, vous retrouvez un message avec la position d'une cachette\n");
		printf("A l'interieur, vous retrouvez l'homme que vous cherchiez\n");
		printf("Malheureusement il s'avere qu'il n'ait pas tenu le choc\n");
		printf("THE FIN\n");
	}


	return 0;
}