using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsSummonerRune
    {
        [DataMember(Name = "purchaseDate")]
        public ulong PurchaseDate { get; set; }

        [DataMember(Name = "purchased")]
        public ulong Purchased { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        [DataMember(Name = "runeId")]
        public uint RuneId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsSummonerRune {\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  Purchased: ").Append(Purchased).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  RuneId: ").Append(RuneId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}