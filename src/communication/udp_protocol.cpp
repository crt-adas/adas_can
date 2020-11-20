#include <vfoma/communication//udp_protocol.hpp>

UdpProtocol::UdpProtocol() 
{

	slen=sizeof(si_other);

	if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1) diep("socket");

        memset((char *) &si_me, 0, sizeof(si_me));
        si_me.sin_family = AF_INET;
        si_me.sin_port = htons(PORT);
        si_me.sin_addr.s_addr = htonl(INADDR_ANY);
        if (bind(s, (struct sockaddr*)&si_me, sizeof(si_me))==-1) diep("bind");

}

UdpProtocol::~UdpProtocol() 
{
	close(s);
}


void UdpProtocol::diep(char *s)
{
  {
   perror(s);
   //exit(1);
 }
}
int UdpProtocol::receiveData()
{
	if (recvfrom(s, buf, BUFLEN, MSG_DONTWAIT, (struct sockaddr*)&si_other, (unsigned int *)&slen)==-1)
	{
	 	//diep("recvfrom()");
		return -1;
	}
	else
	{
		printf("Received packet from %s:%d\n", inet_ntoa(si_other.sin_addr), ntohs(si_other.sin_port));
		int offset = 0, status = -1; double x,y,th;
	  	status = *((int*)(buf + offset));
		offset += 4;
		x = *((double*)(buf + offset));
  		offset += 8;
  		y = *((double*)(buf + offset));
  		offset += 8;
  		th = *((double*)(buf + offset));
  		offset += 8;
       	  	cout<<"status: "<<status<<" x: "<<x<<" y: "<<y<<" th: "<<th<<endl;
	}
	return 0;

}
int UdpProtocol::sendData(int status, double data)
{
	char pkt[4096];
	int pktSize = 0, offset = 0;
  	*((int*)(pkt + offset)) = (int)status;
  	offset += 4;
  	*((double*)(pkt + offset)) = data;
  	offset += 8;
	pktSize = offset;
	if (sendto(s, pkt, pktSize, 0, (struct sockaddr*)&si_other, slen)==-1)
	{
		return -1; //diep("sendto()");
	}
	return 0;
}


