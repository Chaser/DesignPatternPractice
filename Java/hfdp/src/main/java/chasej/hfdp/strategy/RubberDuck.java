package chasej.hfdp.strategy;

public class RubberDuck extends Duck {
	//Constructor
	public RubberDuck() {
		quackBehaviour =  new Squeak();
		flyBehaviour = new FlyWithWings();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}

