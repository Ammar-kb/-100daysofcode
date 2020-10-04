class Robot
{
  String name;
  String colour;
  int weight;

  Robot(String n, String c, int w)
  {
    this.name = n;
    this.colour = c;
    this.weight = w;
  }

  void introductSelf()
  {
    System.out.println("My name is " + this.name);
  }
}

class Person
{
  String name;
  String personality;
  boolean isSitting;
  Robot robotOwned;

  Person(String n, String p, boolean i)
  {
    this.name = n;
    this.personality = p;
    this.isSitting = i;
  }

  void standingUp()
  {
    this.isSitting = false;
  }

  void sittingDown()
  {
    this.isSitting = true;
  }
}


class Main
{
  public static void main(String[] args)
  {
    Robot r1 = new Robot("Tom", "Red", 30);
    Robot r2 = new Robot("Jerry", "Blue", 40);
    r1.introductSelf();
    r2.introductSelf();

    Person p1 = new Person("Anne", "Rude", false);
    Person p2 = new Person("Manny", "Calm", true);
    p1.robotOwned = r2;
    p2.robotOwned = r1;
    p1.robotOwned.introductSelf();
  }
}
