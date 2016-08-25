package chasej.hfdp.strategy;

//NOTE -When compiling (javac) use -d ./ to specify root directory for package out
//Running (java) use full package name package chasej.hfdp.strategy.MiniDuckSimulator
public class MiniDuckSimulator {
 
	public static void main(String[] args) {
		MallardDuck	mallard = new MallardDuck();
		RubberDuck rubberDuckie = new RubberDuck();
		DecoyDuck decoy = new DecoyDuck();
 
		ModelDuck model = new ModelDuck();

		mallard.performQuack();
		rubberDuckie.performQuack();
		decoy.performQuack();
   
		model.performFly();	
		model.setFlyBehaviour(new FlyRocketPowered());
		//.performFly();
	}
}
