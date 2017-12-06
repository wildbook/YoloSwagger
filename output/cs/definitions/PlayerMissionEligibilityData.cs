using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerMissionEligibilityData
    {
        [DataMember(Name = "level")]
        int Level { get; set; }

        [DataMember(Name = "playerInventory")]
        PlayerInventory PlayerInventory { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMissionEligibilityData {\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  PlayerInventory: ").Append(PlayerInventory).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}