using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashBiddingData {
    [DataMember(Name = "currentBid")]
    int CurrentBid {get; set;}

    [DataMember(Name = "currentPaid")]
    int CurrentPaid {get; set;}

    [DataMember(Name = "incomingOffers")]
    LolClashTicketOffer[] IncomingOffers {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashBiddingData {\n");
      sb.Append("  CurrentBid: ").Append(CurrentBid).Append("\n");
      sb.Append("  CurrentPaid: ").Append(CurrentPaid).Append("\n");
      sb.Append("  IncomingOffers: ").Append(IncomingOffers).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}