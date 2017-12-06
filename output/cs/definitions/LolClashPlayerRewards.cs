using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashPlayerRewards
    {
        [DataMember(Name = "seasonVp")]
        int SeasonVp { get; set; }

        [DataMember(Name = "themeVp")]
        LolClashThemeVp[] ThemeVp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPlayerRewards {\n");
            sb.Append("  SeasonVp: ").Append(SeasonVp).Append("\n");
            sb.Append("  ThemeVp: ").Append(ThemeVp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}