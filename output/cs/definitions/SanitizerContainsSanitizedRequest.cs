using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SanitizerContainsSanitizedRequest
    {
        [DataMember(Name = "aggressiveScan")]
        public bool? AggressiveScan { get; set; }

        [DataMember(Name = "includeEmbedded")]
        public bool? IncludeEmbedded { get; set; }

        [DataMember(Name = "level")]
        public uint? Level { get; set; }

        [DataMember(Name = "removeDisallowedChars")]
        public bool? RemoveDisallowedChars { get; set; }

        [DataMember(Name = "text")]
        public string Text { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SanitizerContainsSanitizedRequest {\n");
            sb.Append("  AggressiveScan: ").Append(AggressiveScan).Append("\n");
            sb.Append("  IncludeEmbedded: ").Append(IncludeEmbedded).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  RemoveDisallowedChars: ").Append(RemoveDisallowedChars).Append("\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}