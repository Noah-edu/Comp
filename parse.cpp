#include "lex.hpp"
#include <iostream>

struct varBuf
{
	std::vector<const std::string> variables;
};

std::vector<unsigned int> opBuff;

unsigned int T_Pos = 0;

void opBuffGen()
{
	for(unsigned int i = 0; i < tokenBuff.size(); i++)
	{
		opBuff.push_back(opcval(tokenBuff[i]));
	}	
	
}


int valExpr();

int type();

int variable()
{
	
	if(type() == 99)
	{
		variables.push_back(tokenBuff[T_Pos]);
	}

	switch()
	{


	}
	
	//Add code generation
	T_Pos += 1;
	return 99; 
}




int valExpr()
{


}

//TODO 
//- PAY MIND TO THIS FUNCTION
int main()
{
//	type(T_Pos);
	tokenize();
	std::cout << tokenBuff[0];

}
