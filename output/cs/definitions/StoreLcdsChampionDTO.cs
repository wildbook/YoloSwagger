using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct StoreLcdsChampionDTO
    {
        [DataMember(Name = "active")]
        public bool Active { get; set; }

        [DataMember(Name = "botEnabled")]
        public bool BotEnabled { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "championSkins")]
        public StoreLcdsChampionSkinDTO[] ChampionSkins { get; set; }

        [DataMember(Name = "endDate")]
        public ulong EndDate { get; set; }

        [DataMember(Name = "freeToPlay")]
        public bool FreeToPlay { get; set; }

        [DataMember(Name = "freeToPlayReward")]
        public bool FreeToPlayReward { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "purchaseDate")]
        public ulong PurchaseDate { get; set; }

        [DataMember(Name = "rankedPlayEnabled")]
        public bool RankedPlayEnabled { get; set; }

        [DataMember(Name = "sources")]
        public string[] Sources { get; set; }

        [DataMember(Name = "winCountRemaining")]
        public uint WinCountRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class StoreLcdsChampionDTO {\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  BotEnabled: ").Append(BotEnabled).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChampionSkins: ").Append(ChampionSkins).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  FreeToPlay: ").Append(FreeToPlay).Append("\n");
            sb.Append("  FreeToPlayReward: ").Append(FreeToPlayReward).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  RankedPlayEnabled: ").Append(RankedPlayEnabled).Append("\n");
            sb.Append("  Sources: ").Append(Sources).Append("\n");
            sb.Append("  WinCountRemaining: ").Append(WinCountRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}