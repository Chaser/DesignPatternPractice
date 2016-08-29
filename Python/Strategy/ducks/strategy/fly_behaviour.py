
################################################################################
# Fly behavior interface and behavior implementation classes.
################################################################################
#class FlyBehaviour(object):
#    def __init__(self):
#        pass

#    def fly(self):
#        # explicitly set it up so this can't be called directly
#        raise NotImplementedError('Exception raised, FlyBehaviour is supposed to be an interface / abstract class!')



#class FlyWithWings(FlyBehaviour):
class FlyWithWings(object):
    def fly(self):
        print "I'm flying!"
        

#class FlyNoWay(FlyBehaviour):
class FlyNoWay(object):
    def fly(self):
        print "I can't fly"


#class FlyRocketPowered(FlyBehaviour):
class FlyRocketPowered(object):
    def fly(self):
        print "I'm flying with a rocket!"