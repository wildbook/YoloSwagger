using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SanitizerSanitizerConfig
    {
        [DataMember(Name = "Level0Filter")]
        public string Level0Filter { get; set; }

        [DataMember(Name = "Level0Unfilter")]
        public string Level0Unfilter { get; set; }

        [DataMember(Name = "Level1Filter")]
        public string Level1Filter { get; set; }

        [DataMember(Name = "Level1Unfilter")]
        public string Level1Unfilter { get; set; }

        [DataMember(Name = "Level2Filter")]
        public string Level2Filter { get; set; }

        [DataMember(Name = "Level2Unfilter")]
        public string Level2Unfilter { get; set; }

        [DataMember(Name = "Level3Filter")]
        public string Level3Filter { get; set; }

        [DataMember(Name = "Level3Unfilter")]
        public string Level3Unfilter { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SanitizerSanitizerConfig {\n");
            sb.Append("  Level0Filter: ").Append(Level0Filter).Append("\n");
            sb.Append("  Level0Unfilter: ").Append(Level0Unfilter).Append("\n");
            sb.Append("  Level1Filter: ").Append(Level1Filter).Append("\n");
            sb.Append("  Level1Unfilter: ").Append(Level1Unfilter).Append("\n");
            sb.Append("  Level2Filter: ").Append(Level2Filter).Append("\n");
            sb.Append("  Level2Unfilter: ").Append(Level2Unfilter).Append("\n");
            sb.Append("  Level3Filter: ").Append(Level3Filter).Append("\n");
            sb.Append("  Level3Unfilter: ").Append(Level3Unfilter).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}