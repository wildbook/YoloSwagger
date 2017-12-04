using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderTradeV1 {
    [DataMember(Name = "state")]
    string State {get; set;}

    [DataMember(Name = "cellId")]
    int CellId {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderTradeV1 {\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  CellId: ").Append(CellId).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}