using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolItemSetsItemSetBlock
    {
        [DataMember(Name = "hideIfSummonerSpell")]
        public string HideIfSummonerSpell { get; set; }

        [DataMember(Name = "items")]
        public LolItemSetsItemSetItem[] Items { get; set; }

        [DataMember(Name = "showIfSummonerSpell")]
        public string ShowIfSummonerSpell { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolItemSetsItemSetBlock {\n");
            sb.Append("  HideIfSummonerSpell: ").Append(HideIfSummonerSpell).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  ShowIfSummonerSpell: ").Append(ShowIfSummonerSpell).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}