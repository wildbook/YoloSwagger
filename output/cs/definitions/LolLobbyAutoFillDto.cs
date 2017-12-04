using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyAutoFillDto {
    [DataMember(Name = "autoFillQueues")]
    LolLobbyAutoFillQueueDto[] AutoFillQueues {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyAutoFillDto {\n");
      sb.Append("  AutoFillQueues: ").Append(AutoFillQueues).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}