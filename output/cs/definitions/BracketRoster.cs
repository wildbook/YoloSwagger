using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct BracketRoster {
    [DataMember(Name = "shortName")]
    string ShortName {get; set;}

    [DataMember(Name = "logo")]
    int Logo {get; set;}

    [DataMember(Name = "rosterId")]
    long RosterId {get; set;}

    [DataMember(Name = "logoColor")]
    int LogoColor {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BracketRoster {\n");
      sb.Append("  ShortName: ").Append(ShortName).Append("\n");
      sb.Append("  Logo: ").Append(Logo).Append("\n");
      sb.Append("  RosterId: ").Append(RosterId).Append("\n");
      sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}