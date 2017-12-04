using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersFriend {
    [DataMember(Name = "availability")]
    string Availability {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSuggestedPlayersSuggestedPlayersFriend {\n");
      sb.Append("  Availability: ").Append(Availability).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}