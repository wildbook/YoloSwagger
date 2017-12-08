using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatSanitizeRequest
    {
        [DataMember(Name = "texts")]
        string[] Texts { get; set; }

        [DataMember(Name = "aggressiveScan")]
        bool? AggressiveScan { get; set; }

        [DataMember(Name = "removeDisallowedChars")]
        bool? RemoveDisallowedChars { get; set; }

        [DataMember(Name = "level")]
        uint? Level { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatSanitizeRequest {\n");
            sb.Append("  Texts: ").Append(Texts).Append("\n");
            sb.Append("  AggressiveScan: ").Append(AggressiveScan).Append("\n");
            sb.Append("  RemoveDisallowedChars: ").Append(RemoveDisallowedChars).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}