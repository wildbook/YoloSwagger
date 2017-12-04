using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct CollectionsLcdsChampionSkinDTO {
    [DataMember(Name = "endDate")]
    ulong EndDate {get; set;}

    [DataMember(Name = "winCountRemaining")]
    int WinCountRemaining {get; set;}

    [DataMember(Name = "purchaseDate")]
    ulong PurchaseDate {get; set;}

    [DataMember(Name = "skinId")]
    int SkinId {get; set;}

    [DataMember(Name = "owned")]
    bool Owned {get; set;}

    [DataMember(Name = "lastSelected")]
    bool LastSelected {get; set;}

    [DataMember(Name = "sources")]
    string[] Sources {get; set;}

    [DataMember(Name = "freeToPlayReward")]
    bool FreeToPlayReward {get; set;}

    [DataMember(Name = "stillObtainable")]
    bool StillObtainable {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class CollectionsLcdsChampionSkinDTO {\n");
      sb.Append("  EndDate: ").Append(EndDate).Append("\n");
      sb.Append("  WinCountRemaining: ").Append(WinCountRemaining).Append("\n");
      sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
      sb.Append("  SkinId: ").Append(SkinId).Append("\n");
      sb.Append("  Owned: ").Append(Owned).Append("\n");
      sb.Append("  LastSelected: ").Append(LastSelected).Append("\n");
      sb.Append("  Sources: ").Append(Sources).Append("\n");
      sb.Append("  FreeToPlayReward: ").Append(FreeToPlayReward).Append("\n");
      sb.Append("  StillObtainable: ").Append(StillObtainable).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}