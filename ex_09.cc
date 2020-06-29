/* This program:
 * 1. asks user to input 2 numbers
 * 2. makes sure the first is lower than the other
 * 3. prints out all numbers within the range
 */
 
 #include <iostream>
 
 int main(){
	 int var1, var2;
	 std::cin >> var1 >> var2;
	 var1++;
	 if(var1<var2){
		while(var1<var2){
			std::cout << var1 << std::endl;
			var1++;
		}
	 }
	 else{
		std::cout << "Input incorrect" << std::endl;
	 }
	 std::cout << "Program finished" << std::endl;
	return 0;
}

//Finished. Teatime meow meow