import java.util.Scanner;
import java.math.BigInteger;

class BISHOPS{
	public static void main(String[] args){
		Scanner sc= new Scanner(System.in);
		while(sc.hasNextBigInteger()){
			BigInteger n=sc.nextBigInteger();
			if(n.equals(BigInteger.valueOf(1))) System.out.println(1);
			else System.out.println(n.subtract(BigInteger.valueOf(1)).multiply(BigInteger.valueOf(2)));

		}
	}
}