package chasej.hfdp.combine.factory;

import chasej.hfdp.combine.adapter.Goose;
import chasej.hfdp.combine.adapter.GooseAdapter;
import chasej.hfdp.combine.decorator.QuackCounter;
import chasej.hfdp.combine.ducks.*;

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
        System.out.println("~~~ Duck Simulator with Abstract Factory ~~~");

        Quackable mallardDuck = duckFactory.createMallardDuck();
        Quackable redheadDuck = duckFactory.createRedheadDuck();
        Quackable duckCall = duckFactory.createDuckCall();
        Quackable rubberDuck = duckFactory.createRubberDuck();
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
