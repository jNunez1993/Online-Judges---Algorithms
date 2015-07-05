import java.util.*;
class KindergartenCountingGame{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		boolean check=false;
		while(sc.hasNext()){
			String s= sc.nextLine();
			int count=0;
			for(int i=0;i<s.length();i++){
				if((s.charAt(i)>=65 && s.charAt(i)<=90) || (s.charAt(i)>=97 && s.charAt(i)<=122)){
					check=true;
					if(i==s.length()-1) count++;
				}
				else{
					if(check==true){
						count++;
					}
					check=false;
				}

			}
			System.out.println(count);
		}
	}
}