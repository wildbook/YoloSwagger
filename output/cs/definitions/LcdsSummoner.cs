using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsSummoner {
    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "sumId")]
    ulong SumId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsSummoner {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  SumId: ").Append(SumId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}