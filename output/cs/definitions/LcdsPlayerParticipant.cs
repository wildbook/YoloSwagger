using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsPlayerParticipant {
    [DataMember(Name = "botSkillLevel")]
    int BotSkillLevel {get; set;}

    [DataMember(Name = "summonerInternalName")]
    string SummonerInternalName {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsPlayerParticipant {\n");
      sb.Append("  BotSkillLevel: ").Append(BotSkillLevel).Append("\n");
      sb.Append("  SummonerInternalName: ").Append(SummonerInternalName).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}