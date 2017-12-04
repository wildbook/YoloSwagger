using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsInvitee {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    [DataMember(Name = "inviteeState")]
    LcdsInviteeState InviteeState {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsInvitee {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("  InviteeState: ").Append(InviteeState).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}