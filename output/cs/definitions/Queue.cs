using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct Queue {
    [DataMember(Name = "gameTypeConfig")]
    QueueGameTypeConfig GameTypeConfig {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class Queue {\n");
      sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}