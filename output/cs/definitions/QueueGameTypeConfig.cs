using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct QueueGameTypeConfig {
    [DataMember(Name = "battleBoost")]
    bool BattleBoost {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class QueueGameTypeConfig {\n");
      sb.Append("  BattleBoost: ").Append(BattleBoost).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}