package chasej.hfdp.combine.observer;


/**
 * Created by chaseaj on 8/25/16.
 */
public class MallardDuck implements Quackable, QuackObservable {
    private Observable observable;

    public MallardDuck() {
        observable = new Observable(this);
    }

    public void quack() {
        System.out.println("Quack");
        notifyObservers();

    }

    public void registerObserver(Observer observer) {
        observable.registerObserver(observer);
    }

    public void notifyObservers() {
        observable.notifyObservers();
    }

    public String toString() {
        return "Mallard Duck";
    }
}
