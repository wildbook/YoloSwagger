using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct TicketOfferDTO
    {
        [DataMember(Name = "count")]
        int Count { get; set; }

        [DataMember(Name = "receivePlayerId")]
        ulong ReceivePlayerId { get; set; }

        [DataMember(Name = "offerPlayerId")]
        ulong OfferPlayerId { get; set; }

        [DataMember(Name = "ticketOfferState")]
        TicketOfferState TicketOfferState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TicketOfferDTO {\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  ReceivePlayerId: ").Append(ReceivePlayerId).Append("\n");
            sb.Append("  OfferPlayerId: ").Append(OfferPlayerId).Append("\n");
            sb.Append("  TicketOfferState: ").Append(TicketOfferState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}