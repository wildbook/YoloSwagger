using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct StoreLcdsChampionSkinDTO
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "endDate")]
        public ulong EndDate { get; set; }

        [DataMember(Name = "freeToPlayReward")]
        public bool FreeToPlayReward { get; set; }

        [DataMember(Name = "lastSelected")]
        public bool LastSelected { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "purchaseDate")]
        public ulong PurchaseDate { get; set; }

        [DataMember(Name = "skinId")]
        public int SkinId { get; set; }

        [DataMember(Name = "sources")]
        public string[] Sources { get; set; }

        [DataMember(Name = "stillObtainable")]
        public bool StillObtainable { get; set; }

        [DataMember(Name = "winCountRemaining")]
        public int WinCountRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class StoreLcdsChampionSkinDTO {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  FreeToPlayReward: ").Append(FreeToPlayReward).Append("\n");
            sb.Append("  LastSelected: ").Append(LastSelected).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  SkinId: ").Append(SkinId).Append("\n");
            sb.Append("  Sources: ").Append(Sources).Append("\n");
            sb.Append("  StillObtainable: ").Append(StillObtainable).Append("\n");
            sb.Append("  WinCountRemaining: ").Append(WinCountRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}