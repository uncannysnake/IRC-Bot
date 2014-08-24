
/* IrcBot.h
 *
 *  Created on: 15 Jul 2011
 *      Author: tyler
 */

#ifndef IRCBOT_H_
#define IRCBOT_H_

class IrcBot
{
public:
	IrcBot(char * _nick, char * _usr);
	virtual ~IrcBot();

	bool setup;

	void start();
	bool charSearch(char *toSearch, char *searchFor);

private:
	char *port;
	int s; //the socket descriptor

	char *nick;
	char *usr;

	bool isConnected(char *buf);

	char * timeNow();

	bool sendData(char *msg);

	void sendPong(char *buf);

	void msgHandel(char *buf);
};

#endif /* IRCBOT_H_ */
