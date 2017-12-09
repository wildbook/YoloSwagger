using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootPlayerLootMap
    {
        [DataMember(Name = "playerLoot")]
        public Dictionary<string, LolLootPlayerLoot> PlayerLoot { get; set; }

        [DataMember(Name = "version")]
        public long Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootPlayerLootMap {\n");
            sb.Append("  PlayerLoot: ").Append(PlayerLoot).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}