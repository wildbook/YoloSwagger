using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryRecentlyPlayedSummoner {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "championId")]
    ulong ChampionId {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "teamId")]
    ulong TeamId {get; set;}

    [DataMember(Name = "gameCreationDate")]
    string GameCreationDate {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryRecentlyPlayedSummoner {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  TeamId: ").Append(TeamId).Append("\n");
      sb.Append("  GameCreationDate: ").Append(GameCreationDate).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}