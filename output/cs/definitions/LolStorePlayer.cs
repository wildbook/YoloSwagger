using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStorePlayer {
    [DataMember(Name = "ip")]
    long Ip {get; set;}

    [DataMember(Name = "summonerLevel")]
    uint SummonerLevel {get; set;}

    [DataMember(Name = "rp")]
    long Rp {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStorePlayer {\n");
      sb.Append("  Ip: ").Append(Ip).Append("\n");
      sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
      sb.Append("  Rp: ").Append(Rp).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}