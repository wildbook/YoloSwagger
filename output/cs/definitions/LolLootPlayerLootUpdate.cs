using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootPlayerLootUpdate
    {
        [DataMember(Name = "removed")]
        LolLootPlayerLootDelta[] Removed { get; set; }

        [DataMember(Name = "added")]
        LolLootPlayerLootDelta[] Added { get; set; }

        [DataMember(Name = "redeemed")]
        LolLootPlayerLootDelta[] Redeemed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootPlayerLootUpdate {\n");
            sb.Append("  Removed: ").Append(Removed).Append("\n");
            sb.Append("  Added: ").Append(Added).Append("\n");
            sb.Append("  Redeemed: ").Append(Redeemed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}