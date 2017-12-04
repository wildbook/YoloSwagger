using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches {
    [DataMember(Name = "input")]
    LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster[] Input {get; set;}

    [DataMember(Name = "id")]
    string Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches {\n");
      sb.Append("  Input: ").Append(Input).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}