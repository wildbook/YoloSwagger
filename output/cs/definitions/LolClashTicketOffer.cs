using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashTicketOffer {
    [DataMember(Name = "isAccepted")]
    bool IsAccepted {get; set;}

    [DataMember(Name = "amount")]
    int Amount {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashTicketOffer {\n");
      sb.Append("  IsAccepted: ").Append(IsAccepted).Append("\n");
      sb.Append("  Amount: ").Append(Amount).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}