using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksGetResultFromServiceDTO {
    [DataMember(Name = "result")]
    string Result {get; set;}

    [DataMember(Name = "error")]
    string Error {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksGetResultFromServiceDTO {\n");
      sb.Append("  Result: ").Append(Result).Append("\n");
      sb.Append("  Error: ").Append(Error).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}