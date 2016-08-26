package chasej.hfdp.command.remote;


/**
 * Created by chaseaj on 8/26/16.
 */
public class GarageDoorOpenCommand implements Command {
    GarageDoor garageDoor;

    public GarageDoorOpenCommand(GarageDoor garageDoor) {
        this.garageDoor = garageDoor;
    }

    public void execute() {
        System.out.println("Executing Garage Open Command");
        garageDoor.open();
    }
}
