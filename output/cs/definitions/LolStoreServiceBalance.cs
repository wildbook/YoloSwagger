using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreServiceBalance {
    [DataMember(Name = "currency")]
    string Currency {get; set;}

    [DataMember(Name = "amount")]
    long Amount {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreServiceBalance {\n");
      sb.Append("  Currency: ").Append(Currency).Append("\n");
      sb.Append("  Amount: ").Append(Amount).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}