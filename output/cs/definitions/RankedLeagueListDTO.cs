using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RankedLeagueListDTO {
    [DataMember(Name = "requestorsName")]
    string RequestorsName {get; set;}

    [DataMember(Name = "nextApexUpdate")]
    ulong NextApexUpdate {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "maxLeagueSize")]
    uint MaxLeagueSize {get; set;}

    [DataMember(Name = "requestorsRank")]
    string RequestorsRank {get; set;}

    [DataMember(Name = "queue")]
    string Queue {get; set;}

    [DataMember(Name = "entries")]
    RankedLeagueItemDTO[] Entries {get; set;}

    [DataMember(Name = "tier")]
    string Tier {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RankedLeagueListDTO {\n");
      sb.Append("  RequestorsName: ").Append(RequestorsName).Append("\n");
      sb.Append("  NextApexUpdate: ").Append(NextApexUpdate).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  MaxLeagueSize: ").Append(MaxLeagueSize).Append("\n");
      sb.Append("  RequestorsRank: ").Append(RequestorsRank).Append("\n");
      sb.Append("  Queue: ").Append(Queue).Append("\n");
      sb.Append("  Entries: ").Append(Entries).Append("\n");
      sb.Append("  Tier: ").Append(Tier).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}