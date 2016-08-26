package chasej.hfdp.combine.observer;

/**
 * Created by chaseaj on 8/25/16.
 */
public class Quackologist implements Observer {
    public void update(QuackObservable duck) {
        System.out.println("Quackologist: " + duck.toString() + " just quacked.");
    }
}
