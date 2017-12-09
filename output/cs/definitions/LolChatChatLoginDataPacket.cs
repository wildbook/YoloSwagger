using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatLoginDataPacket
    {
        [DataMember(Name = "allSummonerData")]
        public LolChatChatLoginSummonerData AllSummonerData { get; set; }

        [DataMember(Name = "playerStatSummaries")]
        public LolChatChatPlayerStatSummaries PlayerStatSummaries { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatLoginDataPacket {\n");
            sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
            sb.Append("  PlayerStatSummaries: ").Append(PlayerStatSummaries).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}