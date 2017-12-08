using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct SanitizerSanitizerStatus
    {
        [DataMember(Name = "locale")]
        string Locale { get; set; }

        [DataMember(Name = "region")]
        string Region { get; set; }

        [DataMember(Name = "filteredWordCountsByLevel")]
        Dictionary<string, uint> FilteredWordCountsByLevel { get; set; }

        [DataMember(Name = "allowedCharsCount")]
        uint AllowedCharsCount { get; set; }

        [DataMember(Name = "ready")]
        bool Ready { get; set; }

        [DataMember(Name = "projectedCharsCount")]
        uint ProjectedCharsCount { get; set; }

        [DataMember(Name = "breakingCharsCount")]
        uint BreakingCharsCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SanitizerSanitizerStatus {\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("  FilteredWordCountsByLevel: ").Append(FilteredWordCountsByLevel).Append("\n");
            sb.Append("  AllowedCharsCount: ").Append(AllowedCharsCount).Append("\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("  ProjectedCharsCount: ").Append(ProjectedCharsCount).Append("\n");
            sb.Append("  BreakingCharsCount: ").Append(BreakingCharsCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}