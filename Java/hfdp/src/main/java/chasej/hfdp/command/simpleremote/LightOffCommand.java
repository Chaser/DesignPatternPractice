package chasej.hfdp.command.simpleremote;

/**
 * Created by chaseaj on 8/26/16.
 */
public class LightOffCommand implements Command {
    Light light;

    public LightOffCommand(Light light) {
        this.light = light;
    }

    public void execute() {
        System.out.println("Executing Light Off Command");
        this.light.on();
    }
}
