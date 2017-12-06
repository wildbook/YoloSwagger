using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct SanitizerSanitizeRequest
    {
        [DataMember(Name = "aggressiveScan")]
        bool? AggressiveScan { get; set; }

        [DataMember(Name = "level")]
        uint? Level { get; set; }

        [DataMember(Name = "removeDisallowedChars")]
        bool? RemoveDisallowedChars { get; set; }

        [DataMember(Name = "text")]
        string Text { get; set; }

        [DataMember(Name = "texts")]
        string[] Texts { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SanitizerSanitizeRequest {\n");
            sb.Append("  AggressiveScan: ").Append(AggressiveScan).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  RemoveDisallowedChars: ").Append(RemoveDisallowedChars).Append("\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  Texts: ").Append(Texts).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}