package chasej.hfdp.command.undo;

/**
 * Created by chaseaj on 8/26/16.
 */
public interface Command {
    public void execute();
    public void undo();
}
