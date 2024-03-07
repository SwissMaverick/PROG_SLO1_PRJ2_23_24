//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoSeries.h
// Date de cr�ation 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
// Modification			: Vitor Coelho
//
// Description          : d�finition et prototype li� aux s�rie de r�sistance 
//
//
// Remarques :   Code modifi� lors du test 07.03.2024       : 
//----------------------------------------------------------------------------------//
#ifndef INFO_SERIE
#define INFO_SERIE 

//-- librairies utilis�es --//
#include <stdint.h>
#include "infoUser.h"

//-- d�claration des constantes ou de d�finition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
typedef enum e_valSerie 
{
#define	E6	= 6,
#define E12 = 12,
#define E24 = 24
};

typedef enum e_suffixePoids 
{
#define CST_K = 3,
#define	CST_M = 6
};

//-- d�claration de structeur --// 

typedef struct s_serieRX
{
	char choixSerieR;
	char rangResistance;
	char poidPuissanceR;
	float *pt_tbApproximation;
	float resistanceBrute;
	float resistanceNormalisee;
};
//-- d�claration de prototype --// 
					// controle de la s�rie E6, E12, E24... 
					// contr�le de la valeur unitaire de la r�sistance 
					// contr�le du puissance de puissance en base 10
					// calcul la r�sistance brute de l'utilsateur
					// affichage de la valeur de r�sistance avec suffixe -, k, M
					// calcul de la s�rie de r�sistance 
					// calcul la valeur normalis�e de R

#endif // !INFO_SERIE


