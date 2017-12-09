using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootPlayerLootUpdate
    {
        [DataMember(Name = "added")]
        public LolLootPlayerLootDelta[] Added { get; set; }

        [DataMember(Name = "redeemed")]
        public LolLootPlayerLootDelta[] Redeemed { get; set; }

        [DataMember(Name = "removed")]
        public LolLootPlayerLootDelta[] Removed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootPlayerLootUpdate {\n");
            sb.Append("  Added: ").Append(Added).Append("\n");
            sb.Append("  Redeemed: ").Append(Redeemed).Append("\n");
            sb.Append("  Removed: ").Append(Removed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}