package chasej.hfdp.combine.factory;

import chasej.hfdp.combine.decorator.QuackCounter;
import chasej.hfdp.combine.ducks.*;

/**
 * Created by chaseaj on 8/25/16.
 */
public class CountingDuckFactory extends AbstractDuckFactory {
    @Override
    public Quackable createMallardDuck() {
        return new QuackCounter(new MallardDuck());
    }

    @Override
    public Quackable createRedheadDuck() {

        return new QuackCounter(new RedheadDuck());
    }

    @Override
    public Quackable createDuckCall() {
        return new QuackCounter(new DuckCall());
    }

    @Override
    public Quackable createRubberDuck() {

        return new QuackCounter(new RubberDuck());
    }
}
