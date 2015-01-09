package Strategy;

public class MallardDuck extends Duck {
	//Constructor
	public MallardDuck() {
		quackBehaviour =  new Quack();
		flyBehaviour = new FlyWithWings();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}


