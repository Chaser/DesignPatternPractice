package chasej.hfdp.combine.observer;


/**
 * Created by chaseaj on 8/25/16.
 */
public class RubberDuck implements Quackable {
    Observable observable;

    public RubberDuck(){
        observable = new Observable(this);
    }

    public void quack() {
        System.out.println("Squeak");
    }

    public void registerObserver(Observer observer) {
        observable.registerObserver(observer);
    }

    public void notifyObservers() {
        observable.notifyObservers();
    }

    public String toString() {
        return "Rubber Duck";
    }
}
