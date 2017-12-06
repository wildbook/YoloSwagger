using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSummonerRMSXpAndLevelMessage
    {
        [DataMember(Name = "level")]
        LolSummonerRMSLevelField Level { get; set; }

        [DataMember(Name = "xp")]
        dynamic Xp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerRMSXpAndLevelMessage {\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  Xp: ").Append(Xp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}