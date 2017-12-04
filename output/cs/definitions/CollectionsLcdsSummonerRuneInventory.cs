using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory {
    [DataMember(Name = "dateString")]
    string DateString {get; set;}

    [DataMember(Name = "summonerRunes")]
    CollectionsLcdsSummonerRune[] SummonerRunes {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class CollectionsLcdsSummonerRuneInventory {\n");
      sb.Append("  DateString: ").Append(DateString).Append("\n");
      sb.Append("  SummonerRunes: ").Append(SummonerRunes).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}