using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatGameflowGameData {
    [DataMember(Name = "queue")]
    LolChatQueue Queue {get; set;}

    [DataMember(Name = "teamTwo")]
    LolChatTeamPlayerEntry[] TeamTwo {get; set;}

    [DataMember(Name = "playerChampionSelections")]
    LolChatChampSelection[] PlayerChampionSelections {get; set;}

    [DataMember(Name = "teamOne")]
    LolChatTeamPlayerEntry[] TeamOne {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatGameflowGameData {\n");
      sb.Append("  Queue: ").Append(Queue).Append("\n");
      sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
      sb.Append("  PlayerChampionSelections: ").Append(PlayerChampionSelections).Append("\n");
      sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}