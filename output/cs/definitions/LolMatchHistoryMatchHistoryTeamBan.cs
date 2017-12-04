using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeamBan {
    [DataMember(Name = "pickTurn")]
    ushort PickTurn {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryTeamBan {\n");
      sb.Append("  PickTurn: ").Append(PickTurn).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}