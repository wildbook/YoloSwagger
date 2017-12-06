using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolBannersBannerFlag
    {
        [DataMember(Name = "level")]
        string Level { get; set; }

        [DataMember(Name = "theme")]
        string Theme { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolBannersBannerFlag {\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  Theme: ").Append(Theme).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}