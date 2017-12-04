using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct GameflowGameData {
    [DataMember(Name = "queue")]
    Queue Queue {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class GameflowGameData {\n");
      sb.Append("  Queue: ").Append(Queue).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}