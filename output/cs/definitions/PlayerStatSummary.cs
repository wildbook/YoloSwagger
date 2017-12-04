using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerStatSummary {
    [DataMember(Name = "rating")]
    ulong Rating {get; set;}

    [DataMember(Name = "wins")]
    ulong Wins {get; set;}

    [DataMember(Name = "leaves")]
    ulong Leaves {get; set;}

    [DataMember(Name = "losses")]
    ulong Losses {get; set;}

    [DataMember(Name = "playerStatSummaryType")]
    string PlayerStatSummaryType {get; set;}

    [DataMember(Name = "maxRating")]
    ulong MaxRating {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerStatSummary {\n");
      sb.Append("  Rating: ").Append(Rating).Append("\n");
      sb.Append("  Wins: ").Append(Wins).Append("\n");
      sb.Append("  Leaves: ").Append(Leaves).Append("\n");
      sb.Append("  Losses: ").Append(Losses).Append("\n");
      sb.Append("  PlayerStatSummaryType: ").Append(PlayerStatSummaryType).Append("\n");
      sb.Append("  MaxRating: ").Append(MaxRating).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}