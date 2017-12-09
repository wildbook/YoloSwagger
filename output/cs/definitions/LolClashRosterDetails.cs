using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterDetails
    {
        [DataMember(Name = "iconColorId")]
        public int IconColorId { get; set; }

        [DataMember(Name = "iconId")]
        public int IconId { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterDetails {\n");
            sb.Append("  IconColorId: ").Append(IconColorId).Append("\n");
            sb.Append("  IconId: ").Append(IconId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}