using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DesignPatterns.Strategy
{
    public class ModelDuck : Duck
    {
        public ModelDuck()
        {
            flyBehaviour = new FlyNoWay();            
            quackBehaviour = new Quack();
        }

        public override void display()
        {
            Console.Out.WriteLine("I am a model Duck");
        }
    }
}
