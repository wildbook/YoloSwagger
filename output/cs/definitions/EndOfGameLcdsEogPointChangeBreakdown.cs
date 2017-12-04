using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct EndOfGameLcdsEogPointChangeBreakdown {
    [DataMember(Name = "pointChangeFromChampionsOwned")]
    int PointChangeFromChampionsOwned {get; set;}

    [DataMember(Name = "pointsUsed")]
    int PointsUsed {get; set;}

    [DataMember(Name = "endPoints")]
    int EndPoints {get; set;}

    [DataMember(Name = "previousPoints")]
    int PreviousPoints {get; set;}

    [DataMember(Name = "pointChangeFromGameplay")]
    int PointChangeFromGameplay {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class EndOfGameLcdsEogPointChangeBreakdown {\n");
      sb.Append("  PointChangeFromChampionsOwned: ").Append(PointChangeFromChampionsOwned).Append("\n");
      sb.Append("  PointsUsed: ").Append(PointsUsed).Append("\n");
      sb.Append("  EndPoints: ").Append(EndPoints).Append("\n");
      sb.Append("  PreviousPoints: ").Append(PreviousPoints).Append("\n");
      sb.Append("  PointChangeFromGameplay: ").Append(PointChangeFromGameplay).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}