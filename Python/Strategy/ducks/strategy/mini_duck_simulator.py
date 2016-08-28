from quack_behaviour import *
from fly_behaviour import *
from decoy_duck import *


class MiniDuckSimulator(object):

    def __init__(self, name, description):
        self.name = name
        self.description = description
        self.paths = {}

    

if __name__ == "__main__":

    # Validate flying behaviour
    #fly_behaviour = FlyBehaviour()
    fly_with_wings = FlyWithWings()
    fly_no_way = FlyNoWay()
    fly_rocket_powered = FlyRocketPowered()

    #try:
    #    fly_behaviour.fly()
    #except NotImplementedError as e:
    #    print "The following exception was expected:"
    #   print e

    fly_with_wings.fly()
    fly_no_way.fly()
    fly_rocket_powered.fly()

    # Validate quack behaviour
    quack_behaviour = QuackBehaviour()
    quack = Quack()
    mute_quack = MuteQuack()
    squeak = Squeak()

    try:
        quack_behaviour.quack()
    except NotImplementedError as e:
        print "The following exception was expected:"
        print e

    quack.quack()
    mute_quack.quack()
    squeak.quack()


    decoy_duck = DecoyDuck()
    decoy_duck.display()
    decoy_duck.perform_quack()
    decoy_duck.perform_fly()

    
    #decoy.perform_fly()
    #decoy.perform_quack()

