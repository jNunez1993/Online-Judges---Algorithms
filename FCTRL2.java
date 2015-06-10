import java.util.Scanner;
import java.math.BigInteger;


class  FCTRL2{
	public static void main(String[] args){
		Scanner sc= new Scanner(System.in);
		int cases=sc.nextInt();
		for(int i=0;i<cases;i++){
			int num= sc.nextInt();
			BigInteger res=factorial(num);
			System.out.println(res.toString());
		}
	}



	public static BigInteger factorial(int num){
		if(num==0){
			return BigInteger.valueOf(0);
		}
		BigInteger result= BigInteger.valueOf(1);
		for(int i=1;i<=num;i++){
			result=result.multiply(BigInteger.valueOf(i));
		}
		return result;
	}
}