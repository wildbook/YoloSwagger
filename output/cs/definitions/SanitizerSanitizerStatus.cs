using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SanitizerSanitizerStatus
    {
        [DataMember(Name = "allowedCharsCount")]
        public uint AllowedCharsCount { get; set; }

        [DataMember(Name = "breakingCharsCount")]
        public uint BreakingCharsCount { get; set; }

        [DataMember(Name = "filteredWordCountsByLevel")]
        public Dictionary<string, uint> FilteredWordCountsByLevel { get; set; }

        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        [DataMember(Name = "projectedCharsCount")]
        public uint ProjectedCharsCount { get; set; }

        [DataMember(Name = "ready")]
        public bool Ready { get; set; }

        [DataMember(Name = "region")]
        public string Region { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SanitizerSanitizerStatus {\n");
            sb.Append("  AllowedCharsCount: ").Append(AllowedCharsCount).Append("\n");
            sb.Append("  BreakingCharsCount: ").Append(BreakingCharsCount).Append("\n");
            sb.Append("  FilteredWordCountsByLevel: ").Append(FilteredWordCountsByLevel).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  ProjectedCharsCount: ").Append(ProjectedCharsCount).Append("\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}