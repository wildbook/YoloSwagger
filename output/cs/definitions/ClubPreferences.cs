using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubPreferences {
    [DataMember(Name = "primaryClubKey")]
    string PrimaryClubKey {get; set;}

    [DataMember(Name = "shareClubAffiliation")]
    bool ShareClubAffiliation {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubPreferences {\n");
      sb.Append("  PrimaryClubKey: ").Append(PrimaryClubKey).Append("\n");
      sb.Append("  ShareClubAffiliation: ").Append(ShareClubAffiliation).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}