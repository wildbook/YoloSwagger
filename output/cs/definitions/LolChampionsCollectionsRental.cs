using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsRental
    {
        [DataMember(Name = "endDate")]
        public ulong EndDate { get; set; }

        [DataMember(Name = "purchaseDate")]
        public ulong PurchaseDate { get; set; }

        [DataMember(Name = "rented")]
        public bool Rented { get; set; }

        [DataMember(Name = "winCountRemaining")]
        public int WinCountRemaining { get; set; }

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