using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoadoutsLoadout {
    [DataMember(Name = "items")]
    Dictionary<string, dynamic> Items {get; set;}

    [DataMember(Name = "id")]
    uint Id {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoadoutsLoadout {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}