using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ChampSelectLcdsPointSummary {
    [DataMember(Name = "pointsToNextRoll")]
    int PointsToNextRoll {get; set;}

    [DataMember(Name = "numberOfRolls")]
    int NumberOfRolls {get; set;}

    [DataMember(Name = "maxRolls")]
    int MaxRolls {get; set;}

    [DataMember(Name = "pointsCostToRoll")]
    int PointsCostToRoll {get; set;}

    [DataMember(Name = "currentPoints")]
    int CurrentPoints {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ChampSelectLcdsPointSummary {\n");
      sb.Append("  PointsToNextRoll: ").Append(PointsToNextRoll).Append("\n");
      sb.Append("  NumberOfRolls: ").Append(NumberOfRolls).Append("\n");
      sb.Append("  MaxRolls: ").Append(MaxRolls).Append("\n");
      sb.Append("  PointsCostToRoll: ").Append(PointsCostToRoll).Append("\n");
      sb.Append("  CurrentPoints: ").Append(CurrentPoints).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}