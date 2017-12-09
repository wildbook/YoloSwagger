using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPerkSubStyleBonusResource
    {
        [DataMember(Name = "perkId")]
        public int PerkId { get; set; }

        [DataMember(Name = "styleId")]
        public int StyleId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkSubStyleBonusResource {\n");
            sb.Append("  PerkId: ").Append(PerkId).Append("\n");
            sb.Append("  StyleId: ").Append(StyleId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}