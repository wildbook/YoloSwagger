using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGeoinfoGeoInfo {
    [DataMember(Name = "city")]
    string City {get; set;}

    [DataMember(Name = "region")]
    string Region {get; set;}

    [DataMember(Name = "country")]
    string Country {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGeoinfoGeoInfo {\n");
      sb.Append("  City: ").Append(City).Append("\n");
      sb.Append("  Region: ").Append(Region).Append("\n");
      sb.Append("  Country: ").Append(Country).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}