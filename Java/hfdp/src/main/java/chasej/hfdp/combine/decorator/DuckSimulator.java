package chasej.hfdp.combine.decorator;

import chasej.hfdp.combine.adapter.Goose;
import chasej.hfdp.combine.adapter.GooseAdapter;
import chasej.hfdp.combine.ducks.*;

//NOTE -When compiling (javac) use -d ./ to specify root directory for package out
//Running (java) use full package name package DuckSimulator
public class DuckSimulator
{
    public static void main( String[] args ) {
        DuckSimulator duckSim = new DuckSimulator();
        duckSim.simulate();
    }

    public void simulate() {
        System.out.println("~~~ Duck Simulator: With Decorator ~~~");

        Quackable mallardDuck = new QuackCounter(new MallardDuck());
        Quackable redheadDuck = new QuackCounter(new RedheadDuck());
        Quackable duckCall = new QuackCounter(new DuckCall());
        Quackable rubberDuck = new QuackCounter(new RubberDuck());
        // Decorator Pattern used to count the number of quacks
        Quackable gooseDuck = new GooseAdapter(new Goose());

        simulate(mallardDuck);
        simulate(redheadDuck);
        simulate(duckCall);
        simulate(rubberDuck);
        simulate(gooseDuck);

        System.out.println("The ducks quacked " + QuackCounter.getQuacks() + " times");

    }

    public void simulate(Quackable duck) {
        duck.quack();
    }
}
