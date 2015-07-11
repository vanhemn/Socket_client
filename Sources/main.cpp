/*!
* \file main.cpp
* \brief Fichier main.cpp du programme
* \author Romain
* \version 0.1
* \date 3 juillet 2015
*/

#include "echange.h"

#pragma comment(lib, "ws2_32.lib")

using namespace std;

/*! \fn int main(int argc, char* argv[])
*\brief Fonction main
*
*Fonction principale dans laquelle est cree l'objet client
*
*/

int main(int argc, char* argv[])
{

	char ip[20];
	u_short port;
	string pseudo;

	cout << "================================Chat socket TCP=================================" << endl;
	cout << "Adresse IP du serveur: ";
	cin.getline(ip, 19);
	cout << "Sur le port: ";
	cin >> port;
	cout << "Pseudo: ";
	cin >> pseudo;


	Client c(port, ip, pseudo);
	c.connexionAuServeur();
	c.envoieMessage();

	/*if (c.envoieMessage() == 1)
	{
		cout << "DOUBLE";
		c.~Client();
	}*/

	system("PAUSE");
	return 0;
}

//Test