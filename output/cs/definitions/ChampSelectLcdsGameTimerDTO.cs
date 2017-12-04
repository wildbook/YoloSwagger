using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ChampSelectLcdsGameTimerDTO {
    [DataMember(Name = "currentGameState")]
    string CurrentGameState {get; set;}

    [DataMember(Name = "remainingTimeInMillis")]
    double RemainingTimeInMillis {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ChampSelectLcdsGameTimerDTO {\n");
      sb.Append("  CurrentGameState: ").Append(CurrentGameState).Append("\n");
      sb.Append("  RemainingTimeInMillis: ").Append(RemainingTimeInMillis).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}