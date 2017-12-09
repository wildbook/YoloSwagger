using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSummonerRMSXpAndLevelMessage
    {
        [DataMember(Name = "level")]
        public LolSummonerRMSLevelField Level { get; set; }

        [DataMember(Name = "xp")]
        public dynamic Xp { get; set; }

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