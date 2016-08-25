package chasej.hfdp.combine.composite;

import chasej.hfdp.combine.adapter.Goose;
import chasej.hfdp.combine.adapter.GooseAdapter;
import chasej.hfdp.combine.decorator.QuackCounter;
import chasej.hfdp.combine.ducks.*;
import chasej.hfdp.combine.factory.AbstractDuckFactory;
import chasej.hfdp.combine.factory.CountingDuckFactory;

import static com.sun.tools.doclint.Entity.times;

//NOTE -When compiling (javac) use -d ./ to specify root directory for package out
//Running (java) use full package name package chasej.hfdp.combine.ducks.DuckSimulator
public class DuckSimulator
{
    public static void main( String[] args ) {
        DuckSimulator duckSim = new DuckSimulator();
        AbstractDuckFactory duckFactory = new CountingDuckFactory();

        duckSim.simulate(duckFactory);
    }

    public void simulate(AbstractDuckFactory duckFactory) {
        System.out.println("~~~ Duck Simulator with Composite Flocks ~~~");

        Quackable redheadDuck = duckFactory.createRedheadDuck();
        Quackable duckCall = duckFactory.createDuckCall();
        Quackable rubberDuck = duckFactory.createRubberDuck();
        Quackable gooseDuck = new GooseAdapter(new Goose());

        Flock flockOfDucks = new Flock();
        flockOfDucks.add(redheadDuck);
        flockOfDucks.add(duckCall);
        flockOfDucks.add(rubberDuck);
        flockOfDucks.add(gooseDuck);

        Quackable mallardOne = duckFactory.createMallardDuck();
        Quackable mallardTwo = duckFactory.createMallardDuck();
        Quackable mallardThree = duckFactory.createMallardDuck();
        Quackable mallardFour = duckFactory.createMallardDuck();

        Flock flockOfMallards = new Flock();
        flockOfMallards.add(mallardOne);
        flockOfMallards.add(mallardTwo);
        flockOfMallards.add(mallardThree);
        flockOfMallards.add(mallardFour);

        flockOfDucks.add(flockOfMallards);

        System.out.println("\nDuck Simulator: Whole Flock Simulation");
        simulate(flockOfDucks);

        System.out.println("\nDuck Simulator: Mallard Flock Simulation");
        simulate(flockOfMallards);

        System.out.println("The ducks quacked " + QuackCounter.getQuacks() + " times");

    }

    public void simulate(Quackable duck) {
        duck.quack();
    }
}
