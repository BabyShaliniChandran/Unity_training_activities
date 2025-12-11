// See https://aka.ms/new-console-template for more information
using System;
using System.Collections.Generic;
using System.Reflection.Emit;

class Program
{
    static void Main()
    {
        List<string> task = new List<string>();
        bool run=true;

        void viewTAsk()
            {   
                int i=1;
                if (task.Count != 0)
                    {
                        task.ForEach(task => 
                        {Console.WriteLine($"{i}.{task}");
                        i++;
                        }
                        );
                        
                    }
                    else
                    {
                        Console.WriteLine("No task is added!");
                    }
            }

        while (run)
        {
            Console.WriteLine("---------To Do List-----------");
            Console.WriteLine("1. Add Task");
            Console.WriteLine("2. View Task");
            Console.WriteLine("3. Remove Task");
            Console.WriteLine("4. Exit");

            string choice= Console.ReadLine();

            

            switch (choice)
            {
                case "1":
                    Console.WriteLine("Enter the task");
                    string input=Console.ReadLine();
                    task.Add(input);
                    Console.WriteLine("Task Added!");
                    break;
                
                case "2":
                    viewTAsk();
                    break;
                
                case "3":
                    if (task.Count!=0){
                        viewTAsk();
                        Console.WriteLine("Choose the task number to delete the task");
                        int  taskno = Convert.ToInt32(Console.ReadLine());
                        if (taskno > 0 && taskno <= task.Count)
                        {
                            task.RemoveAt(taskno - 1); 
                            Console.WriteLine("Task Removed!");
                        }
                        else
                        {
                            Console.WriteLine("Invalid task number!");
                        }
    
                    }
                    else
                    {
                        Console.WriteLine("no task to remove!");
                    }
                    break;

                case "4":
                    run=false;
                    break;

                default:
                    Console.WriteLine("enter the valid number between 1-4!..");
                    break;

            }
        }




    }

}
