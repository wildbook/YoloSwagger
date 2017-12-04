using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolItemSetsItemSetBlock {
    [DataMember(Name = "items")]
    LolItemSetsItemSetItem[] Items {get; set;}

    [DataMember(Name = "hideIfSummonerSpell")]
    string HideIfSummonerSpell {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "showIfSummonerSpell")]
    string ShowIfSummonerSpell {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolItemSetsItemSetBlock {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  HideIfSummonerSpell: ").Append(HideIfSummonerSpell).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  ShowIfSummonerSpell: ").Append(ShowIfSummonerSpell).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}