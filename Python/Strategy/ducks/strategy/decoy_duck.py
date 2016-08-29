from duck import *
from quack_behaviour import *
from fly_behaviour import *

class DecoyDuck(Duck):

    def __init__(self):
        fly_no_way_instance = FlyNoWay()
        self.set_fly_behaviour(fly_no_way_instance)
        mute_instance = MuteQuack()
        self.set_quack_behaviour(mute_instance)

    def display(self):
        print "I'm a decoy duck"
