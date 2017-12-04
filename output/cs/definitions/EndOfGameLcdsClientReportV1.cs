using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct EndOfGameLcdsClientReportV1 {
    [DataMember(Name = "offenses")]
    string Offenses {get; set;}

    [DataMember(Name = "offenderSummonerId")]
    ulong OffenderSummonerId {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "comments")]
    string Comments {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class EndOfGameLcdsClientReportV1 {\n");
      sb.Append("  Offenses: ").Append(Offenses).Append("\n");
      sb.Append("  OffenderSummonerId: ").Append(OffenderSummonerId).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  Comments: ").Append(Comments).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}