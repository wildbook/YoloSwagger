using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootGameDataSummonerIcon {
    [DataMember(Name = "id")]
    int Id {get; set;}

    [DataMember(Name = "iconPath")]
    string IconPath {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootGameDataSummonerIcon {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  IconPath: ").Append(IconPath).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}