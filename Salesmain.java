import java.util.Scanner;
interface Bonus
{
    int min_bonus = 1000;
     void dept_turnover();
     void emp_bonus();
}
class Sales implements Bonus{
    
    private double sales_turnover;
    public Sales(double sales_turnover)
    {
        this.sales_turnover = sales_turnover;
    }
    public void emp_bonus()
    {
        System.out.println("Basic salary of the employee is : $30,000");
        System.out.println("Adding the turnover bonus and min bonus ,The salary of the employee is/n"+ ((sales_turnover*0.2)+30000+min_bonus));
    }
    public void dept_turnover()
    {
        System.out.println("The Sales Department turnover is : "+ sales_turnover);
    }
}
class Procurement implements Bonus{
    
    private double pro_turnover;
    public Procurement(double pro_turnover)
    {
        this.pro_turnover = pro_turnover;
    }
    public void emp_bonus() // Assuming basic salary for all employees to be 30,000
    {
        System.out.println("\nBasic salary of the employee is : $30,000");
        System.out.println("Adding the turnover bonus and min bonus ,The salary of the employee is :\n"+ ((pro_turnover*0.2)+30000+min_bonus));
    }
    public void dept_turnover()
    {
        System.out.println("The Procurement Department turnover is : "+ pro_turnover);
    }
}
class Main
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the sales dept turnover : ");
        double sales_turnover = sc.nextDouble();
        System.out.println("Enter the Procurement dept turnover : ");
        double pro_turnover = sc.nextDouble();
        Sales s = new Sales(sales_turnover);
        s.dept_turnover();
        s.emp_bonus();
        Procurement p = new Procurement(pro_turnover);
        p.dept_turnover();
        p.emp_bonus();
        
    }
}
