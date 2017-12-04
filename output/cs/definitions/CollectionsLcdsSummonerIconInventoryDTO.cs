using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct CollectionsLcdsSummonerIconInventoryDTO {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "dateString")]
    string DateString {get; set;}

    [DataMember(Name = "summonerIcons")]
    CollectionsLcdsSummonerIcon[] SummonerIcons {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class CollectionsLcdsSummonerIconInventoryDTO {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  DateString: ").Append(DateString).Append("\n");
      sb.Append("  SummonerIcons: ").Append(SummonerIcons).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}