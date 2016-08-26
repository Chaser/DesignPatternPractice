package chasej.hfdp.combine.observer;

import java.util.ArrayList;
import java.util.Iterator;

/**
 * Created by chaseaj on 8/25/16.
 */
public class Observable implements QuackObservable {
    private ArrayList observers = new ArrayList();
    private QuackObservable duck;

    public Observable(QuackObservable duck) {
        this.duck = duck;
    }

    public void registerObserver(Observer observer) {
        this.observers.add(observer);

    }

    public void notifyObservers() {
        Iterator iterator = observers.iterator();
        while(iterator.hasNext()) {
            Observer observer = (Observer)iterator.next();
            observer.update(duck);
        }
    }

}
