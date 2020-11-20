#pragma once


#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
using namespace std;


#define BUFLEN 1024
#define PORT 4950


class UdpProtocol {
private:

	struct sockaddr_in si_me, si_other;
	int s, i, slen;
	char buf[BUFLEN];

public:


	UdpProtocol();
	virtual ~UdpProtocol();

	void diep(char *s);
	int receiveData();
	int sendData(int status, double data);

};

