using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubReferenceDto {
    [DataMember(Name = "clubName")]
    string ClubName {get; set;}

    [DataMember(Name = "clubKey")]
    string ClubKey {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubReferenceDto {\n");
      sb.Append("  ClubName: ").Append(ClubName).Append("\n");
      sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}