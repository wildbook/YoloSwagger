using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksChampionPreferredStyle
    {
        [DataMember(Name = "championId")]
        public uint ChampionId { get; set; }

        [DataMember(Name = "championName")]
        public string ChampionName { get; set; }

        [DataMember(Name = "style")]
        public int Style { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksChampionPreferredStyle {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChampionName: ").Append(ChampionName).Append("\n");
            sb.Append("  Style: ").Append(Style).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}