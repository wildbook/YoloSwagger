using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksPerkStyleResource {
    [DataMember(Name = "subStyleBonus")]
    LolPerksPerkSubStyleBonusResource[] SubStyleBonus {get; set;}

    [DataMember(Name = "isAdvanced")]
    bool IsAdvanced {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "defaultPerks")]
    int[] DefaultPerks {get; set;}

    [DataMember(Name = "tooltip")]
    string Tooltip {get; set;}

    [DataMember(Name = "defaultPageName")]
    string DefaultPageName {get; set;}

    [DataMember(Name = "allowedSubStyles")]
    int[] AllowedSubStyles {get; set;}

    [DataMember(Name = "defaultSubStyle")]
    int DefaultSubStyle {get; set;}

    [DataMember(Name = "iconPath")]
    string IconPath {get; set;}

    [DataMember(Name = "slots")]
    LolPerksPerkStyleSlotResource[] Slots {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksPerkStyleResource {\n");
      sb.Append("  SubStyleBonus: ").Append(SubStyleBonus).Append("\n");
      sb.Append("  IsAdvanced: ").Append(IsAdvanced).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  DefaultPerks: ").Append(DefaultPerks).Append("\n");
      sb.Append("  Tooltip: ").Append(Tooltip).Append("\n");
      sb.Append("  DefaultPageName: ").Append(DefaultPageName).Append("\n");
      sb.Append("  AllowedSubStyles: ").Append(AllowedSubStyles).Append("\n");
      sb.Append("  DefaultSubStyle: ").Append(DefaultSubStyle).Append("\n");
      sb.Append("  IconPath: ").Append(IconPath).Append("\n");
      sb.Append("  Slots: ").Append(Slots).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}