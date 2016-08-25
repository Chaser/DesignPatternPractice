package chasej.hfdp.combine.factory;

import chasej.hfdp.combine.ducks.Quackable;

/**
 * Created by chaseaj on 8/25/16.
 */
public abstract class AbstractDuckFactory {
    public abstract Quackable createMallardDuck();
    public abstract Quackable createRedheadDuck();
    public abstract Quackable createDuckCall();
    public abstract Quackable createRubberDuck();
}
