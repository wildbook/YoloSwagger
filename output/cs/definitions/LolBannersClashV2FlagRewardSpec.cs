using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolBannersClashV2FlagRewardSpec
    {
        [DataMember(Name = "level")]
        public string Level { get; set; }

        [DataMember(Name = "seasonId")]
        public string SeasonId { get; set; }

        [DataMember(Name = "theme")]
        public string Theme { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolBannersClashV2FlagRewardSpec {\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  SeasonId: ").Append(SeasonId).Append("\n");
            sb.Append("  Theme: ").Append(Theme).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}