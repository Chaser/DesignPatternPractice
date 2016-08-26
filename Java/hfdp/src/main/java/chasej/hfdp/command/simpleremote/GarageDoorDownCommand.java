package chasej.hfdp.command.simpleremote;

/**
 * Created by chaseaj on 8/26/16.
 */

public class GarageDoorDownCommand implements Command {
    GarageDoor garageDoor;

    public GarageDoorDownCommand(GarageDoor garageDoor) {
        this.garageDoor = garageDoor;
    }

    public void execute() {
        garageDoor.close();
    }
}
