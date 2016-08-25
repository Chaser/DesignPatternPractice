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
        System.out.println("~~~ Duck Simulator ~~~");

        // Decorator Pattern used to count the number of quacks
        Quackable mallardDuckCount = new QuackCounter(new MallardDuck());
        Quackable redheadDuckCount = new QuackCounter(new RedheadDuck());
        Quackable duckCallCount = new QuackCounter(new DuckCall());
        Quackable rubberDuckCount = new QuackCounter(new RubberDuck());
        Quackable gooseDuckCount = new GooseAdapter(new Goose());

        simulate(mallardDuckCount);
        simulate(redheadDuckCount);
        simulate(duckCallCount);
        simulate(rubberDuckCount);
        simulate(gooseDuckCount);

        System.out.println("The ducks quacked " + QuackCounter.getQuacks() + " times");

    }

    public void simulate(Quackable duck) {
        duck.quack();
    }
}
