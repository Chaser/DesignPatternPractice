package chasej.hfdp.command.party;

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

    public void undo() {
        this.appliance.on();
    }
}
