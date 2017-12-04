using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootPlayerLootMap {
    [DataMember(Name = "version")]
    long Version {get; set;}

    [DataMember(Name = "playerLoot")]
    Dictionary<string, LolLootPlayerLoot> PlayerLoot {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootPlayerLootMap {\n");
      sb.Append("  Version: ").Append(Version).Append("\n");
      sb.Append("  PlayerLoot: ").Append(PlayerLoot).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}