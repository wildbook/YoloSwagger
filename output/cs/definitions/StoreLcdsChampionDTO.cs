using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct StoreLcdsChampionDTO
    {
        [DataMember(Name = "championSkins")]
        StoreLcdsChampionSkinDTO[] ChampionSkins { get; set; }

        [DataMember(Name = "rankedPlayEnabled")]
        bool RankedPlayEnabled { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "botEnabled")]
        bool BotEnabled { get; set; }

        [DataMember(Name = "purchaseDate")]
        ulong PurchaseDate { get; set; }

        [DataMember(Name = "endDate")]
        ulong EndDate { get; set; }

        [DataMember(Name = "sources")]
        string[] Sources { get; set; }

        [DataMember(Name = "freeToPlayReward")]
        bool FreeToPlayReward { get; set; }

        [DataMember(Name = "owned")]
        bool Owned { get; set; }

        [DataMember(Name = "active")]
        bool Active { get; set; }

        [DataMember(Name = "freeToPlay")]
        bool FreeToPlay { get; set; }

        [DataMember(Name = "winCountRemaining")]
        uint WinCountRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class StoreLcdsChampionDTO {\n");
            sb.Append("  ChampionSkins: ").Append(ChampionSkins).Append("\n");
            sb.Append("  RankedPlayEnabled: ").Append(RankedPlayEnabled).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  BotEnabled: ").Append(BotEnabled).Append("\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Sources: ").Append(Sources).Append("\n");
            sb.Append("  FreeToPlayReward: ").Append(FreeToPlayReward).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  FreeToPlay: ").Append(FreeToPlay).Append("\n");
            sb.Append("  WinCountRemaining: ").Append(WinCountRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}