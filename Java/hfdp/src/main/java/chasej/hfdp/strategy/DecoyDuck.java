package chasej.hfdp.strategy;

public class DecoyDuck extends Duck {
	//Constructor
	public DecoyDuck() {
		setFlyBehavior(new FlyNoWay());
		setQuackBehavior(new MuteQuack());
	}

	public void display() {
		System.out.println("I'm a duck decoy");
	}

}

