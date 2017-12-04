using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SanitizerContainsSanitizedResponse {
    [DataMember(Name = "contains")]
    bool Contains {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SanitizerContainsSanitizedResponse {\n");
      sb.Append("  Contains: ").Append(Contains).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}