using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashSetTicketRequest {
    [DataMember(Name = "ticketAmount")]
    int TicketAmount {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashSetTicketRequest {\n");
      sb.Append("  TicketAmount: ").Append(TicketAmount).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}