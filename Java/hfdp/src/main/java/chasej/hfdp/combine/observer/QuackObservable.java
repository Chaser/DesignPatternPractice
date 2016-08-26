package chasej.hfdp.combine.observer;


/**
 * Created by chaseaj on 8/25/16.
 */
public interface QuackObservable {
    public void registerObserver(Observer observer);
    public void notifyObservers();
}
