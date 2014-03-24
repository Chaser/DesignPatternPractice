package Strategy;

//NOTE -When compiling (javac) use -d ./ to specify root directory for package out
//Running (java) use full package name Strategy.MiniDuckSimulator

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
