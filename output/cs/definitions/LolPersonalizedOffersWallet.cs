using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersWallet {
    [DataMember(Name = "rp")]
    long Rp {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersWallet {\n");
      sb.Append("  Rp: ").Append(Rp).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}