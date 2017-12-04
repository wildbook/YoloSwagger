using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreItemLocalization {
    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "language")]
    string Language {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreItemLocalization {\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Language: ").Append(Language).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}