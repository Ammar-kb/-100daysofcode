import java.util.*;
public class Main   
{
	public static void main(String[] args) {
		ArrayList<String> color = new ArrayList<String>();
		color.add("Red");
		color.add("Yellow");
		color.add("Purple");
		color.add("Green");
		System.out.println(color.size());
		System.out.println(color);
		
		Iterator<String> it = color.iterator();
		while(it.hasNext()){
		    String s = (String)it.next();
		    System.out.println(s);
		}
	
	}
}
