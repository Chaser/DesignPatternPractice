package chasej.hfdp.strategy;

public class ModelDuck extends Duck {
	//Constructor
	public ModelDuck() {
		quackBehaviour =  new Squeak();
		flyBehaviour = new FlyWithWings();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}

