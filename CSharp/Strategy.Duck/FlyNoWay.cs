﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DesignPatterns.Strategy
{
    class FlyNoWay : IFlyBehaviour
    {
        public void fly()
        {
            Console.Out.WriteLine("I can't fly");
        }
    }
}
