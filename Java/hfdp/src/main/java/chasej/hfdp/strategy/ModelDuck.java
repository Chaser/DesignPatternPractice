package chasej.hfdp.strategy;

public class ModelDuck extends Duck {
	//Constructor
	public ModelDuck() {
		flyBehavior = new FlyNoWay();
		quackBehavior = new Quack();
	}

	public void display() {
		System.out.println("I'm a real Mallard Duck");
	}

}

