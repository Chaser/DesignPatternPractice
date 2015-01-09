using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Strategy
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Out.WriteLine("Pattern: Strategy");
            Console.Out.WriteLine("Name: Ducks");
            Duck mallardDuck = new MallardDuck();
            RubberDuck rubberDuckie = new RubberDuck();
            DecoyDuck decoyDuck = new DecoyDuck();
            ModelDuck modelDuck = new ModelDuck();

            Console.Out.WriteLine("Mallard Duck");
            Console.Out.Write("\t");
            mallardDuck.performQuack();
            Console.Out.Write("\t");
            mallardDuck.performFly();

            Console.Out.WriteLine("Rubber Duckie");
            Console.Out.Write("\t");
            rubberDuckie.performQuack();
            Console.Out.Write("\t");
            rubberDuckie.performFly();

            Console.Out.WriteLine("Decoy Duck");
            Console.Out.Write("\t");
            decoyDuck.performQuack();
            Console.Out.Write("\t");
            decoyDuck.performFly();

            Console.Out.WriteLine("Model Duck");
            Console.Out.Write("\t");
            modelDuck.performQuack();
            Console.Out.Write("\t");
            modelDuck.performFly();
 
            Console.In.ReadLine();
        }
    }
}
