using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsChestEligibility {
    [DataMember(Name = "maximumChests")]
    uint MaximumChests {get; set;}

    [DataMember(Name = "earnableChests")]
    uint EarnableChests {get; set;}

    [DataMember(Name = "nextChestRechargeTime")]
    ulong NextChestRechargeTime {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsChestEligibility {\n");
      sb.Append("  MaximumChests: ").Append(MaximumChests).Append("\n");
      sb.Append("  EarnableChests: ").Append(EarnableChests).Append("\n");
      sb.Append("  NextChestRechargeTime: ").Append(NextChestRechargeTime).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}