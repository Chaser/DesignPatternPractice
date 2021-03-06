package chasej.hfdp.command.undo;

/**
 * Created by chaseaj on 8/26/16.
 */
public class LightOnCommand implements Command {
    Light light;

    public LightOnCommand(Light light) {
        this.light = light;
    }

    public void execute() {
        System.out.println("Executing Light On Command");
        this.light.on();
    }

    public void undo() {
        System.out.println("Undoing Light On Command");
        this.light.off();
    }
}
