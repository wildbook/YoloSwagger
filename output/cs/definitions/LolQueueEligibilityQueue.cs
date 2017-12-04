using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolQueueEligibilityQueue {
    [DataMember(Name = "numPlayersPerTeam")]
    int NumPlayersPerTeam {get; set;}

    [DataMember(Name = "queueAvailability")]
    LolQueueEligibilityQueueAvailability QueueAvailability {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "showPositionSelector")]
    bool ShowPositionSelector {get; set;}

    [DataMember(Name = "minLevel")]
    uint MinLevel {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    [DataMember(Name = "areFreeChampionsAllowed")]
    bool AreFreeChampionsAllowed {get; set;}

    [DataMember(Name = "maximumParticipantListSize")]
    int MaximumParticipantListSize {get; set;}

    [DataMember(Name = "isRanked")]
    bool IsRanked {get; set;}

    [DataMember(Name = "maxLevel")]
    uint MaxLevel {get; set;}

    [DataMember(Name = "championsRequiredToPlay")]
    uint ChampionsRequiredToPlay {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolQueueEligibilityQueue {\n");
      sb.Append("  NumPlayersPerTeam: ").Append(NumPlayersPerTeam).Append("\n");
      sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
      sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  AreFreeChampionsAllowed: ").Append(AreFreeChampionsAllowed).Append("\n");
      sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
      sb.Append("  IsRanked: ").Append(IsRanked).Append("\n");
      sb.Append("  MaxLevel: ").Append(MaxLevel).Append("\n");
      sb.Append("  ChampionsRequiredToPlay: ").Append(ChampionsRequiredToPlay).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}