using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashPlayerData {
    [DataMember(Name = "tickets")]
    int Tickets {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashPlayerData {\n");
      sb.Append("  Tickets: ").Append(Tickets).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}