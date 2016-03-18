
class CfgPatches 
{
	class Enigma_Exile_UpdateRP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		author[]= {"Happydayz_EngimaTeam"}; 	
	};
};
class CfgFunctions 
{
	class Enigma 
	{
		class main 
		{
			file = "\Enigma_Exile_UpdateRP\init";
			class init
			{
				preInit = 1;
			};
			class postinit
			{
				postInit = 1;
			};
		};
	};
};

