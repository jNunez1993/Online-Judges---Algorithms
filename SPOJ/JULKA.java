import java.util.Scanner;
import java.math.BigInteger;
 
class JULKA{
	public static void main(String[] args){
		Scanner sc= new Scanner(System.in);
		int cases=10;
		for(int i=0;i<cases;i++){
			BigInteger first= sc.nextBigInteger();
			BigInteger second= sc.nextBigInteger();
			BigInteger sum= first.add(second);
			BigInteger klaudia=sum.divide(BigInteger.valueOf(2));
			BigInteger natalie=klaudia.subtract(second);
			System.out.println(klaudia.toString());
			System.out.println(natalie.toString());
		}
	}
} 