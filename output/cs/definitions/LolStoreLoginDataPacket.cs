using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreLoginDataPacket {
    [DataMember(Name = "simpleMessages")]
    LolStoreSimpleDialogMessage[] SimpleMessages {get; set;}

    [DataMember(Name = "allSummonerData")]
    LolStoreAllSummonerData AllSummonerData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreLoginDataPacket {\n");
      sb.Append("  SimpleMessages: ").Append(SimpleMessages).Append("\n");
      sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}