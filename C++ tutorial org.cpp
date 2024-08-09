			//// This is the C++ project ////
			
#include <iostream> //to work with input and output objects
using namespace std; // c++ standard variables EX: cout << "......."; using namespace std; or std::

int main() { // A function, any code inside its curly brackets {} will be executedd.
	
	cout <<"Hello World"; //cout is standard library its display any thisgs that can " " this potation mark.
	
	// Every C++ statement ends with a semicolon " ; "
	
	return 0; // that can end of the main function code.
}

			//////////////////
			
#include <iostream>
using namespace std;
	
	int main(){
		
	comments // *Explain C++ code, don't execute the code
	
	// one singel comment symbole is " // ", and multiline comments symbole is " /*  */ "
	}
	
			/////////////////
		// input and output //
			
	#include <iostream>
using namespace std;
	
	int main(){
		
		cin >> // --> // is c input stream class. the extraction oprator is ( >> )
		
		cout << // --> // is output stream class. the insertion oprator is ( << )
		
		endl // --> // this output stream class.  end line or new line.
}
			/////////////////
		// Basic data type //
			
	#include <iostream>
	using namespace std;
	
	int main(){
		
		/*  boolean 1 byte store true or false.
			char 1 byte single character / letter / number.
			integer (int) 2 or 4 byte stores whole number, without decimal.
			float 4 store fractional, contaning one or more decimales. Sufficent for storing 6-7 decimal digits.
			double 8 byte only the differnce between double and flote is the size " 15 ".
		*/
		// in use string you get -->
		//#include <iostream>
		//#include <string>
		//string a secquance of character
		
		#include <iostream>
		#include <string>
		
		using namespace std;
		
		int main(){
			
			string H = "Hello";
			
			cout << "string: "<< H;
		}
}

		//////////////////////
	// C++ variable identifiers //
	 
	 /*
	 * names can contain letters, digits and underscores
	 * names muse begin with a letter or an underscores(_)
	 */
	 
	 #include <iostream>
	using namespace std;

int main(){
	int num;
	//multiple variable 
	 int x, y, z;
	// one value multiple variable
	x=y=z = 10;
	
	const int x = 20;
	x = 30;
	
	// this number is not update becouse assing before the variable we can create " const ".
	
	return 0;
}

		////////////////////
	// c++ oprator //
	
/*		1. Arithmetic oprators 
			
			basic matimatical oprator -->
				+, -, /, *, %, ++, --.
				
		2. Assignment oprators
			
				x = 4, +=  x+=3  x=x+3, 
				int a = 10;
				a %= 5; // a = a%5
				
		3. comparison oprators(boolyan)
				==, !=, >, <, >=, <=;
				
		4. logical oprators
		
				&& -->
				|| -->
				! -->
		5. biwise oprator
				
				~ -->
				&, |
				>> --> x>>y --> x= x/2^y
				<< --> x<<y --> x= x*2^y
				^ -->
		
	*/
	
			////////////////////////
		// C++ Math //
		
		you can get <cmath> matimatical function;
		
		* max: maximum
		* min: minmum
		* sqrt: squar root
		* round: rounding // decimal to intger
		* pow: Power
		
		#include <iostream>
		#inclide <cmath>
		using namespace std;
		
		int main(){
			
			int a=5, b=36, c=3;
		
//		you can 
	cout << max (a,b);
	cout <<sqrt (b);
	cout <<pow(a, c);
	cout <<sqrt (b);
	cout <<round (23.56);
		}
		
		//////////////////////
	// conditional statement //
	
	if --> if a specifed condition is true.
	else --> if the same condition is false.
	else if --> new condition. if the first conditon is false.
	switch many alternative blocks of code to be executed.
	
	#include <iostream>
	using namespace std;
	
	int main(){
		
		double result;
		
			cout <<"Enter your result: ";
				cin >>result;
				
				if (result < 50){
					cout <<"D";
				}else if (result >= 50 && result <=70){
					cout  <<"C";
				}else if (result > 70 && result <=80){
					cout << "B";
				}else {
					cout << "A";
				}
						return 0;
	}
	/// switch
		float x=5, y=3;
		char ope;
			cout <<"Enter oyur oprator: ";
				cin >>ope;
			switch (ope){
			case '+': 
				cout << x+y;
				break;
			case '-':
				cout << x+y;
				break;
			case '*':
				cout << x*y;
				break;
			case '/':
				cout << x/y;
				break;
			
			}
			return 0;
		}
		
		////////////////////
	// loops //
		while loop --> execute condition is true.
		
		do/while --> execute before checking if the condition is true,
		then it will repeat the the loop as long as the condition is true.
		
		for loop --> how many times you want to loop through a block of code.
		