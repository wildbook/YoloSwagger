using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoginLoginSessionWallet {
    [DataMember(Name = "ip")]
    long Ip {get; set;}

    [DataMember(Name = "rp")]
    long Rp {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoginLoginSessionWallet {\n");
      sb.Append("  Ip: ").Append(Ip).Append("\n");
      sb.Append("  Rp: ").Append(Rp).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}