package chasej.hfdp.strategy;

public class RubberDuck extends Duck {
	//Constructor
	public RubberDuck() {
		flyBehavior = new FlyNoWay();
		quackBehavior = new Squeak();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}

