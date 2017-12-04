using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestricted {
    [DataMember(Name = "gatekeeperRestrictions")]
    LolLobbyTeamBuilderGatekeeperRestriction[] GatekeeperRestrictions {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderGatekeeperRestricted {\n");
      sb.Append("  GatekeeperRestrictions: ").Append(GatekeeperRestrictions).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}