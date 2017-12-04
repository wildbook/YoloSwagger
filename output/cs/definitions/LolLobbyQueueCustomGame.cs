using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyQueueCustomGame {
    [DataMember(Name = "queueAvailability")]
    LolLobbyQueueAvailability QueueAvailability {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyQueueCustomGame {\n");
      sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}