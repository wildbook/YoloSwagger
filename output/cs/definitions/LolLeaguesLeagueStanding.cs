using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLeaguesLeagueStanding {
    [DataMember(Name = "inactivityStatus")]
    string InactivityStatus {get; set;}

    [DataMember(Name = "pendingDemotion")]
    bool PendingDemotion {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "apexDaysUntilDecay")]
    long ApexDaysUntilDecay {get; set;}

    [DataMember(Name = "losses")]
    ulong Losses {get; set;}

    [DataMember(Name = "miniseriesResults")]
    LolLeaguesMiniseries[] MiniseriesResults {get; set;}

    [DataMember(Name = "previousPosition")]
    ulong PreviousPosition {get; set;}

    [DataMember(Name = "emblems")]
    LolLeaguesLeagueEmblem[] Emblems {get; set;}

    [DataMember(Name = "inactive")]
    bool Inactive {get; set;}

    [DataMember(Name = "wins")]
    ulong Wins {get; set;}

    [DataMember(Name = "pendingPromotion")]
    bool PendingPromotion {get; set;}

    [DataMember(Name = "position")]
    ulong Position {get; set;}

    [DataMember(Name = "positionDelta")]
    long PositionDelta {get; set;}

    [DataMember(Name = "id")]
    string Id {get; set;}

    [DataMember(Name = "points")]
    long Points {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLeaguesLeagueStanding {\n");
      sb.Append("  InactivityStatus: ").Append(InactivityStatus).Append("\n");
      sb.Append("  PendingDemotion: ").Append(PendingDemotion).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
      sb.Append("  Losses: ").Append(Losses).Append("\n");
      sb.Append("  MiniseriesResults: ").Append(MiniseriesResults).Append("\n");
      sb.Append("  PreviousPosition: ").Append(PreviousPosition).Append("\n");
      sb.Append("  Emblems: ").Append(Emblems).Append("\n");
      sb.Append("  Inactive: ").Append(Inactive).Append("\n");
      sb.Append("  Wins: ").Append(Wins).Append("\n");
      sb.Append("  PendingPromotion: ").Append(PendingPromotion).Append("\n");
      sb.Append("  Position: ").Append(Position).Append("\n");
      sb.Append("  PositionDelta: ").Append(PositionDelta).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Points: ").Append(Points).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}