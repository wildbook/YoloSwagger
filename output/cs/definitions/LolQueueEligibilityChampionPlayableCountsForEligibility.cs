using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolQueueEligibilityChampionPlayableCountsForEligibility {
    [DataMember(Name = "championsOwned")]
    uint ChampionsOwned {get; set;}

    [DataMember(Name = "championsFreeToPlay")]
    uint ChampionsFreeToPlay {get; set;}

    [DataMember(Name = "championsRented")]
    uint ChampionsRented {get; set;}

    [DataMember(Name = "championsFreeToPlayReward")]
    uint ChampionsFreeToPlayReward {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolQueueEligibilityChampionPlayableCountsForEligibility {\n");
      sb.Append("  ChampionsOwned: ").Append(ChampionsOwned).Append("\n");
      sb.Append("  ChampionsFreeToPlay: ").Append(ChampionsFreeToPlay).Append("\n");
      sb.Append("  ChampionsRented: ").Append(ChampionsRented).Append("\n");
      sb.Append("  ChampionsFreeToPlayReward: ").Append(ChampionsFreeToPlayReward).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}