using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChampionsGameDataChampion {
    [DataMember(Name = "stingerSfxPath")]
    string StingerSfxPath {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "roles")]
    string[] Roles {get; set;}

    [DataMember(Name = "banVoPath")]
    string BanVoPath {get; set;}

    [DataMember(Name = "skins")]
    LolChampionsGameDataChampionSkin[] Skins {get; set;}

    [DataMember(Name = "passive")]
    LolChampionsGameDataChampionSpell Passive {get; set;}

    [DataMember(Name = "alias")]
    string Alias {get; set;}

    [DataMember(Name = "chooseVoPath")]
    string ChooseVoPath {get; set;}

    [DataMember(Name = "squarePortraitPath")]
    string SquarePortraitPath {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    [DataMember(Name = "spells")]
    LolChampionsGameDataChampionSpell[] Spells {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChampionsGameDataChampion {\n");
      sb.Append("  StingerSfxPath: ").Append(StingerSfxPath).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Roles: ").Append(Roles).Append("\n");
      sb.Append("  BanVoPath: ").Append(BanVoPath).Append("\n");
      sb.Append("  Skins: ").Append(Skins).Append("\n");
      sb.Append("  Passive: ").Append(Passive).Append("\n");
      sb.Append("  Alias: ").Append(Alias).Append("\n");
      sb.Append("  ChooseVoPath: ").Append(ChooseVoPath).Append("\n");
      sb.Append("  SquarePortraitPath: ").Append(SquarePortraitPath).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Spells: ").Append(Spells).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}