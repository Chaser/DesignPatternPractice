package chasej.hfdp.command.remote;


/**
 * Created by chaseaj on 8/26/16.
 */

public class GarageDoorCloseCommand implements Command {
    GarageDoor garageDoor;

    public GarageDoorCloseCommand(GarageDoor garageDoor) {
        this.garageDoor = garageDoor;
    }

    public void execute() {
        garageDoor.close();
    }
}
