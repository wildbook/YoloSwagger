using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TicketOfferDTO
    {
        [DataMember(Name = "count")]
        public int Count { get; set; }

        [DataMember(Name = "offerPlayerId")]
        public ulong OfferPlayerId { get; set; }

        [DataMember(Name = "receivePlayerId")]
        public ulong ReceivePlayerId { get; set; }

        [DataMember(Name = "ticketOfferState")]
        public TicketOfferState TicketOfferState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TicketOfferDTO {\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  OfferPlayerId: ").Append(OfferPlayerId).Append("\n");
            sb.Append("  ReceivePlayerId: ").Append(ReceivePlayerId).Append("\n");
            sb.Append("  TicketOfferState: ").Append(TicketOfferState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}