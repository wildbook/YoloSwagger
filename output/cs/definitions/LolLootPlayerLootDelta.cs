using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootPlayerLootDelta {
    [DataMember(Name = "deltaCount")]
    int DeltaCount {get; set;}

    [DataMember(Name = "playerLoot")]
    LolLootPlayerLoot PlayerLoot {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootPlayerLootDelta {\n");
      sb.Append("  DeltaCount: ").Append(DeltaCount).Append("\n");
      sb.Append("  PlayerLoot: ").Append(PlayerLoot).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}