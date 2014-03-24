package Strategy;

public class DecoyDuck extends Duck {
	//Constructor
	public DecoyDuck() {
		quackBehaviour =  new Squeak();
		flyBehaviour = new FlyWithWings();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}

