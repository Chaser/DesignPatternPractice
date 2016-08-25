package chasej.hfdp.combine.composite;

import chasej.hfdp.combine.ducks.Quackable;

import java.util.ArrayList;
import java.util.Iterator;

/**
 * Created by chaseaj on 8/25/16.
 */
public class Flock implements Quackable {
    ArrayList quackers = new ArrayList();

    public void add(Quackable quacker) {
        this.quackers.add(quacker);
    }

    public void quack() {
        Iterator iterator = quackers.iterator();
        while (iterator.hasNext()) {
            Quackable quacker = (Quackable)iterator.next();
            quacker.quack();
        }
    }
}
