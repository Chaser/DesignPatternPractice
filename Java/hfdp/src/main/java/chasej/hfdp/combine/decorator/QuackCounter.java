package chasej.hfdp.combine.decorator;

import chasej.hfdp.combine.ducks.Quackable;

/**
 * Created by chaseaj on 8/25/16.
 * Decorator Pattern to get more information out of the duck
 */
public class QuackCounter implements Quackable {
    private Quackable duck;
    private static int numberOfQuacks;

    public QuackCounter(Quackable duck) {
        this.duck = duck;
    }

    public void quack() {
        this.duck.quack();
        numberOfQuacks++;
    }

    public static int getQuacks() {
        return numberOfQuacks;
    }
}
