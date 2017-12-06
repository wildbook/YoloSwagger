using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampionsCollectionsRental
    {
        [DataMember(Name = "endDate")]
        ulong EndDate { get; set; }

        [DataMember(Name = "purchaseDate")]
        ulong PurchaseDate { get; set; }

        [DataMember(Name = "rented")]
        bool Rented { get; set; }

        [DataMember(Name = "winCountRemaining")]
        int WinCountRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsRental {\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  Rented: ").Append(Rented).Append("\n");
            sb.Append("  WinCountRemaining: ").Append(WinCountRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}