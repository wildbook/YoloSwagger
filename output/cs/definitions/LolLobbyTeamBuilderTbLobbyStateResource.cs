using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyStateResource {
    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "matchmakingState")]
    LolLobbyTeamBuilderTBDMatchmakingState MatchmakingState {get; set;}

    [DataMember(Name = "championSelectState")]
    LolLobbyTeamBuilderChampionSelectStateV1 ChampionSelectState {get; set;}

    [DataMember(Name = "premadeState")]
    LolLobbyTeamBuilderTbLobbyPremadeStateResource PremadeState {get; set;}

    [DataMember(Name = "phaseName")]
    string PhaseName {get; set;}

    [DataMember(Name = "afkCheckState")]
    LolLobbyTeamBuilderAfkCheckStateV1 AfkCheckState {get; set;}

    [DataMember(Name = "counter")]
    int Counter {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderTbLobbyStateResource {\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  MatchmakingState: ").Append(MatchmakingState).Append("\n");
      sb.Append("  ChampionSelectState: ").Append(ChampionSelectState).Append("\n");
      sb.Append("  PremadeState: ").Append(PremadeState).Append("\n");
      sb.Append("  PhaseName: ").Append(PhaseName).Append("\n");
      sb.Append("  AfkCheckState: ").Append(AfkCheckState).Append("\n");
      sb.Append("  Counter: ").Append(Counter).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}