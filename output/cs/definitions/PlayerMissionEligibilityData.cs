using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerMissionEligibilityData {
    [DataMember(Name = "playerInventory")]
    PlayerInventory PlayerInventory {get; set;}

    [DataMember(Name = "level")]
    int Level {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerMissionEligibilityData {\n");
      sb.Append("  PlayerInventory: ").Append(PlayerInventory).Append("\n");
      sb.Append("  Level: ").Append(Level).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}