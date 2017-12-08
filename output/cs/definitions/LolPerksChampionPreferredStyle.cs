using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksChampionPreferredStyle
    {
        [DataMember(Name = "championName")]
        string ChampionName { get; set; }

        [DataMember(Name = "style")]
        int Style { get; set; }

        [DataMember(Name = "championId")]
        uint ChampionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksChampionPreferredStyle {\n");
            sb.Append("  ChampionName: ").Append(ChampionName).Append("\n");
            sb.Append("  Style: ").Append(Style).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}