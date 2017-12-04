using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest {
    [DataMember(Name = "honorType")]
    string HonorType {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolHonorV2ServiceProxyHonorPlayerServerRequest {\n");
      sb.Append("  HonorType: ").Append(HonorType).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}