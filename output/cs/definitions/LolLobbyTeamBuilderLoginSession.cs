using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderLoginSession {
    [DataMember(Name = "state")]
    LolLobbyTeamBuilderLoginSessionState State {get; set;}

    [DataMember(Name = "connected")]
    bool Connected {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderLoginSession {\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  Connected: ").Append(Connected).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}