using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsSummonerIcon
    {
        [DataMember(Name = "iconId")]
        public int IconId { get; set; }

        [DataMember(Name = "purchaseDate")]
        public ulong PurchaseDate { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsSummonerIcon {\n");
            sb.Append("  IconId: ").Append(IconId).Append("\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}