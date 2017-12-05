import java.util.*;

public class Euler14 {
	/*The following iterative sequence is defined for the set of positive integers:

	n -> n/2 (n is even)
	n -> 3n + 1 (n is odd)
	
	Using the rule above and starting with 13, we generate the following sequence:
	
	13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
	It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
	
	Which starting number, under one million, produces the longest chain? */
	//brute force
	
	public static void main(String args[]){
		
		LinkedList<Long> list = new LinkedList<Long>(); 
		long maxCount = 0;
		int  number = 0; 
	 
		for(int i = 10; i < 1000000; i++) {
			long temp = i;
			
			while (temp != 1){
				if (temp % 2 == 0){
					temp /= 2;
					list.add(temp);
				} else {
					temp = (3 * temp) + 1;
					list.add(temp);
				}
			}
			
			if(list.size() > maxCount){
				maxCount = list.size();
				number = i; 
			}
			list.clear();
		}
		
		System.out.print("The longest chain starts with: " + number);
		System.out.println(" and is " + maxCount + " long.");
	}
}
