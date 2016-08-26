package chasej.hfdp.combine.observer;

/**
 * Created by chaseaj on 8/25/16.
 */
public class GooseAdapter implements Quackable {
    Goose goose;
    private Observable observable;

    public GooseAdapter(Goose goose) {
        this.goose = goose;
        observable = new Observable(this);
    }

    public void quack() {
        this.goose.honk();
    }

    public void registerObserver(Observer observer) {
        observable.registerObserver(observer);
    }

    public void notifyObservers() {
        observable.notifyObservers();
    }

    public String toString() {
        return "Goose Pretending to be a Duck";
    }
}
