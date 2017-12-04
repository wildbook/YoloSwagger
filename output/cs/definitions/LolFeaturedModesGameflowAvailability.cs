using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolFeaturedModesGameflowAvailability {
    [DataMember(Name = "isAvailable")]
    bool IsAvailable {get; set;}

    [DataMember(Name = "state")]
    LolFeaturedModesGameflowAvailabilityState State {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolFeaturedModesGameflowAvailability {\n");
      sb.Append("  IsAvailable: ").Append(IsAvailable).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}