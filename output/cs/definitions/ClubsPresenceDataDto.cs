using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubsPresenceDataDto {
    [DataMember(Name = "clubTag")]
    string ClubTag {get; set;}

    [DataMember(Name = "clubName")]
    string ClubName {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubsPresenceDataDto {\n");
      sb.Append("  ClubTag: ").Append(ClubTag).Append("\n");
      sb.Append("  ClubName: ").Append(ClubName).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}