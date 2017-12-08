using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolBannersClashV2FlagRewardSpec
    {
        [DataMember(Name = "seasonId")]
        string SeasonId { get; set; }

        [DataMember(Name = "theme")]
        string Theme { get; set; }

        [DataMember(Name = "level")]
        string Level { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolBannersClashV2FlagRewardSpec {\n");
            sb.Append("  SeasonId: ").Append(SeasonId).Append("\n");
            sb.Append("  Theme: ").Append(Theme).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}