package chasej.hfdp.combine.adapter;

import chasej.hfdp.combine.ducks.*;

//NOTE -When compiling (javac) use -d ./ to specify root directory for package out
//Running (java) use full package name package chasej.hfdp.combine.ducks.DuckSimulator
public class DuckSimulator
{
    public static void main( String[] args ) {
        DuckSimulator duckSim = new DuckSimulator();
        duckSim.simulate();
    }

    public void simulate() {
        System.out.println("~~~ Duck Simulator: With Goose Adapter ~~~");

        Quackable mallardDuck = new MallardDuck();
        Quackable redheadDuck = new RedheadDuck();
        Quackable duckCall = new DuckCall();
        Quackable rubberDuck = new RubberDuck();
        // Adapter Pattern used to make a Goose look like a duck
        Quackable gooseDuck = new GooseAdapter(new Goose());

        simulate(mallardDuck);
        simulate(redheadDuck);
        simulate(duckCall);
        simulate(rubberDuck);
        simulate(gooseDuck);

    }

    public void simulate(Quackable duck) {
        duck.quack();
    }
}
