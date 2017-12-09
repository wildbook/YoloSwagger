using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatLoginSummonerData
    {
        [DataMember(Name = "summonerLevelAndPoints")]
        public LolChatChatLoginSummonerLevelAndPoints SummonerLevelAndPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatLoginSummonerData {\n");
            sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}