package chasej.hfdp.command.remote;

import chasej.hfdp.command.simpleremote.Command;
import chasej.hfdp.command.simpleremote.Light;

/**
 * Created by chaseaj on 8/26/16.
 */
public class ApplianceOnCommand implements Command {
    ApplianceControl appliance;

    public ApplianceOnCommand(ApplianceControl appliance) {
        this.appliance = appliance;
    }

    public void execute() {
        System.out.println("Executing Appliance On Command");
        this.appliance.on();
    }
}
