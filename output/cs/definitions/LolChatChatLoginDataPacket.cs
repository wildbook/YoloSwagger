using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatChatLoginDataPacket {
    [DataMember(Name = "playerStatSummaries")]
    LolChatChatPlayerStatSummaries PlayerStatSummaries {get; set;}

    [DataMember(Name = "allSummonerData")]
    LolChatChatLoginSummonerData AllSummonerData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatChatLoginDataPacket {\n");
      sb.Append("  PlayerStatSummaries: ").Append(PlayerStatSummaries).Append("\n");
      sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}