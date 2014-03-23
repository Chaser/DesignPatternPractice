package duck.strategy;

public class MallardDuck extends Duck {
	//Constructor
	public MallardDuck() {
		quackBehavior =  new Quack();
		flyBehaviour = new FlyWithWings();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}


