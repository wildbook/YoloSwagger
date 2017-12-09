using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPerkSettingResource
    {
        [DataMember(Name = "perkIds")]
        public int[] PerkIds { get; set; }

        [DataMember(Name = "perkStyle")]
        public int PerkStyle { get; set; }

        [DataMember(Name = "perkSubStyle")]
        public int PerkSubStyle { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkSettingResource {\n");
            sb.Append("  PerkIds: ").Append(PerkIds).Append("\n");
            sb.Append("  PerkStyle: ").Append(PerkStyle).Append("\n");
            sb.Append("  PerkSubStyle: ").Append(PerkSubStyle).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}