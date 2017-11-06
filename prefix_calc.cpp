#include <iostream> // std::cin std::cout std::endl std::string
#include <string> // std::string std::stof

// this gets a value
float procExpr() {
	
	// this could be a number or an operator
	std::string valOrOp;
	std::cin >>valOrOp;
	
	if (valOrOp == "+") 
		return procExpr() + procExpr();
		
	else if (valOrOp == "-")
		return procExpr() - procExpr();
	
	else if (valOrOp == "*")
		return procExpr() * procExpr();
	
	else if (valOrOp == "/")
		return procExpr() / procExpr();
	
	else // it's a number
		return std::stof(valOrOp);
			
}

int main() {
		while (true)
			std::cout <<">" <<procExpr() <<std::endl;

}

