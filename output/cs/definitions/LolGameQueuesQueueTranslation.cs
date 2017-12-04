using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGameQueuesQueueTranslation {
    [DataMember(Name = "shortName")]
    string ShortName {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "detailedDescription")]
    string DetailedDescription {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGameQueuesQueueTranslation {\n");
      sb.Append("  ShortName: ").Append(ShortName).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  DetailedDescription: ").Append(DetailedDescription).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}