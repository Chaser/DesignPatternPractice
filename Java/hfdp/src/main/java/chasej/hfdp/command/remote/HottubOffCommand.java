package chasej.hfdp.command.remote;

/**
 * Created by chaseaj on 8/26/16.
 */
public class HottubOffCommand implements Command {
    Hottub hottub;

    public HottubOffCommand(Hottub hottub) {
        this.hottub = hottub;
    }

    public void execute() {
        hottub.off();
    }
}
