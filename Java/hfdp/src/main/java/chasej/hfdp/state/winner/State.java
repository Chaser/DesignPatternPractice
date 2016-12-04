package chasej.hfdp.state.winner;

/**
 * Created by chaseaj on 9/3/16.
 */
public interface State {

    public void insertQuarter();
    public void ejectQuarter();
    public void turnCrank();
    public void dispense();
}
