// Chatbot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AI.h"
#include <iostream>
#include <string>
#include "Commands.cpp"

using namespace std;

string msg;
bool howareyou;

	static void ai_m_think() { // ai main think process
		if (msg == "hi") {
			cout << "hello! how are you?";
			howareyou = true;
			getline(cin, msg);
			if (howareyou = true) {
				if (msg == "good") {
					cout << "i'm glad to hear that!" << endl;
				}
				else if (msg == "sad") {
					cout << "awww :(" << endl;
				}
				else {
					cout << "i feel the same today" << endl;
				}
				howareyou = false;
			}
			else {
				cout << "thank you :D" << endl;
			}
		}
	}

	static void checkfor_cmd() {
		std::size_t foundText = msg.find("/");
		if (foundText != std::string::npos)
			std::cout << "found '/' at " << foundText << '/n' << endl;
			std::cout << "running command.." << endl;
			if (msg == "/calc") {
				calc();
			}
			else {
				cout << "command seems to be invalid" << endl;
				cout << "check the help.txt file for help" << endl;
			}
	}

	static void ai_m_start() { // ai main start process
		std::cout << ">> ";
		std::getline(cin, msg);
		ai_m_think();
		checkfor_cmd();
	}



int main()
{
	ai_m_start();
    return 0;
}

