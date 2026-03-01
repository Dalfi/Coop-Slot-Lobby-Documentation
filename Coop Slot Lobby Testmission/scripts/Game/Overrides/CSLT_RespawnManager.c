modded class CSL_RespawnManager : ScriptComponent
{
	override string NormalizeSquadCallSign(string squad)
	{
		if(squad.EndsWith("A") || squad.EndsWith("B"))
		{
			squad = squad.Substring(0, squad.Length() -1); // Remove groupidentifier from squadname
		}
		
		return squad;
	}
}