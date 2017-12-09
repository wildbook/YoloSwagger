using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashBiddingData
    {
        [DataMember(Name = "currentBid")]
        public int CurrentBid { get; set; }

        [DataMember(Name = "currentPaid")]
        public int CurrentPaid { get; set; }

        [DataMember(Name = "incomingOffers")]
        public LolClashTicketOffer[] IncomingOffers { get; set; }

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