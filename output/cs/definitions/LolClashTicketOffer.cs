using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTicketOffer
    {
        [DataMember(Name = "amount")]
        public int Amount { get; set; }

        [DataMember(Name = "isAccepted")]
        public bool IsAccepted { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTicketOffer {\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  IsAccepted: ").Append(IsAccepted).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}