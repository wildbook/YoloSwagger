using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGeoinfoWhereAmIRequest {
    [DataMember(Name = "ipAddress")]
    string IpAddress {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGeoinfoWhereAmIRequest {\n");
      sb.Append("  IpAddress: ").Append(IpAddress).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}