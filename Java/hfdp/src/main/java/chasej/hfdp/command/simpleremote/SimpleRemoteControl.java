package chasej.hfdp.command.simpleremote;

/**
 * Created by chaseaj on 8/26/16.
 */
public class SimpleRemoteControl {
    Command slot;

    public SimpleRemoteControl() {}

    public void setCommand(Command command) {
        slot = command;
    }

    public void buttonWasPressed() {
        slot.execute();
    }

}
