abstract class Sum{
    
    Sum()
    {
        System.out.println("The sum of numbers are displayed ");
    }
   public abstract int sumOfTwo(int n1, int n2);
   public abstract int sumOfThree(int n1, int n2, int n3);
   public void disp(){
	System.out.println("Method of class Sum");
   }
}
class Main extends Sum{

   public int sumOfTwo(int num1, int num2){
	return num1+num2;
   }
   public int sumOfThree(int num1, int num2, int num3){
	return num1+num2+num3;
   }
   public static void main(String args[]){
	Sum obj = new Main();
	Sum obj1 = new Main();
	System.out.println(obj.sumOfTwo(3, 7));
	System.out.println(obj.sumOfThree(4, 3, 19));
	obj1.disp();
   }
}
