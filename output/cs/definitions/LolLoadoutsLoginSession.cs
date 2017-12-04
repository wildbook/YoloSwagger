using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoadoutsLoginSession {
    [DataMember(Name = "idToken")]
    string IdToken {get; set;}

    [DataMember(Name = "state")]
    LolLoadoutsLoginSessionStates State {get; set;}

    [DataMember(Name = "puuid")]
    string Puuid {get; set;}

    [DataMember(Name = "gasToken")]
    dynamic GasToken {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoadoutsLoginSession {\n");
      sb.Append("  IdToken: ").Append(IdToken).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  Puuid: ").Append(Puuid).Append("\n");
      sb.Append("  GasToken: ").Append(GasToken).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}