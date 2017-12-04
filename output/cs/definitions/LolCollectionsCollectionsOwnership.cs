using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsOwnership {
    [DataMember(Name = "freeToPlayReward")]
    bool FreeToPlayReward {get; set;}

    [DataMember(Name = "rental")]
    LolCollectionsCollectionsRental Rental {get; set;}

    [DataMember(Name = "owned")]
    bool Owned {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsOwnership {\n");
      sb.Append("  FreeToPlayReward: ").Append(FreeToPlayReward).Append("\n");
      sb.Append("  Rental: ").Append(Rental).Append("\n");
      sb.Append("  Owned: ").Append(Owned).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}