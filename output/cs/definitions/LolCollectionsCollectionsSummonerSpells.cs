using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerSpells {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "spells")]
    ulong[] Spells {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsSummonerSpells {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  Spells: ").Append(Spells).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}