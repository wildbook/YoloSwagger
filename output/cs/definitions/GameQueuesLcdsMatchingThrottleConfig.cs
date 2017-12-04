using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct GameQueuesLcdsMatchingThrottleConfig {
    [DataMember(Name = "cacheName")]
    string CacheName {get; set;}

    [DataMember(Name = "limit")]
    long Limit {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class GameQueuesLcdsMatchingThrottleConfig {\n");
      sb.Append("  CacheName: ").Append(CacheName).Append("\n");
      sb.Append("  Limit: ").Append(Limit).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}