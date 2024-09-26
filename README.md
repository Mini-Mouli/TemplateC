HOW TO USE IT :

      FIRST :            

            - git clone the repo by copying the link on repo's main page
      
      THEN, EITHER :

            --------------------------------------------------------------------
      
            1- PASTE YOUR DIRECTORY with all C# files inside to this git repo : 
                  cp -r ***repo-epita***/ <| TP NAME |> / bX-tpY-***account name***/
                  
            -------------------------------- OR --------------------------------
               
            2- CREATE YOUR SOLUTION :
               
               WINDOWS :
                Open Rider
                Create a Console Application in .NET Section with :
                    solution & project name : SmurfBot
                    solution directory : ***your git repo***
                    framework : net7.0
               
               LINUX :
                dotnet new sln --name SmurfBot
                dotnet new console -n SmurfBot -f net7.0 -lang 'C#'
                dotnet sln add SmurfBot/SmurfBot.csproj

            --------------------------------------------------------------------
