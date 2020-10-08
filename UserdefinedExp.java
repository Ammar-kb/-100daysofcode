import java.util.*;
class MyException extends Exception 
{ 
    public MyException(String s) 
    { 
        super(s); 
    } 
}
public class Main
{
	public static void main(String[] args) {
		int n;
		System.out.println("Enter a number");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		try {
		    if(n<9 || n>99)
		    throw new MyException("Abnormal Number");
		    else
		    System.out.println("The Number "+n+" is Accepted");
		} catch(MyException e) {
		    System.out.println("The Number is Indegestible"); 
		    System.out.println(e.getMessage());
		} finally {
		    System.out.println("Good day!");
		}
	}
}
