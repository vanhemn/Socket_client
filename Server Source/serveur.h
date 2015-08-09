#ifndef ECOUTE
#define ECOUTE

#include <iostream>
#include <winsock2.h>
#include <Windows.h>
#include <string>
#include <fstream>

#define NOMBRE_OCTET 2048


class Server
{
public:
	Server();
	Server(std::string pseudo, u_short port, u_short portMusic);
	int start();
	int listenClient();
	int sendMusic();

private:
	SOCKET *m_sockServer;
	SOCKET *m_sockMusic;
	SOCKADDR_IN m_sin;
	SOCKADDR_IN m_sinMusic;
	std::string *m_pseudo;
	u_short *m_port;
	u_short *m_portMusic;
	char *m_buffer;
	char *m_bufferMusic;
	int *m_erreur;
};


int ecoute(SOCKET sock,SOCKADDR_IN sin, std::string pseudo);

#endif