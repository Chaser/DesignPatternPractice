package chasej.hfdp.combine.adapter;

import chasej.hfdp.combine.ducks.Quackable;

/**
 * Created by chaseaj on 8/25/16.
 */
public class GooseAdapter implements Quackable {
    Goose goose;

    public GooseAdapter(Goose goose) {
        this.goose = goose;
    }

    public void quack() {
        this.goose.honk();
    }
}
