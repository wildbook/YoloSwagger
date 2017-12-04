using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal {
    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "splashPath")]
    string SplashPath {get; set;}

    [DataMember(Name = "ownership")]
    LolLootCollectionsOwnership Ownership {get; set;}

    [DataMember(Name = "tilePath")]
    string TilePath {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootCollectionsChampionSkinMinimal {\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  SplashPath: ").Append(SplashPath).Append("\n");
      sb.Append("  Ownership: ").Append(Ownership).Append("\n");
      sb.Append("  TilePath: ").Append(TilePath).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}