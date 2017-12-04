using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClubsPublicClubsPublicData {
    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    [DataMember(Name = "availability")]
    string Availability {get; set;}

    [DataMember(Name = "tag")]
    LolClubsPublicClubTag Tag {get; set;}

    [DataMember(Name = "lastSeenOnlineTimestamp")]
    string LastSeenOnlineTimestamp {get; set;}

    [DataMember(Name = "summonerIconId")]
    int SummonerIconId {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClubsPublicClubsPublicData {\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("  Availability: ").Append(Availability).Append("\n");
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      sb.Append("  LastSeenOnlineTimestamp: ").Append(LastSeenOnlineTimestamp).Append("\n");
      sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}