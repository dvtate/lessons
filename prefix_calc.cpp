#include <iostream> // std::cin std::cout std::endl std::string
#include <string> // std::string std::stof

/* Polish notation:
* operators precede the numbers they act on.
* one benefit is there is no need for order of operations.
* The expression `* 2 + 1 3` is the same as `2 * (1 + 3)`
*/

// this gets a value/evaluates an operator
float procExpr() {
	
	// this could be a number or an operator
	std::string valOrOp;
	std::cin >>valOrOp; // std::cin tokenizes the input for us
	
	// addition
	if (valOrOp == "+") 
		return procExpr() + procExpr(); // recursion
		
	// subtraction
	else if (valOrOp == "-")
		return procExpr() - procExpr();
	
	// multiplication
	else if (valOrOp == "*")
		return procExpr() * procExpr();
	
	// division
	else if (valOrOp == "/")
		return procExpr() / procExpr();
	
	else // it's a number (hopefully)
		return std::stof(valOrOp); // convert input to a float
			
}

// calculator prompt
int main() {
	while (true)
		std::cout <<">" <<procExpr() <<std::endl;
}
