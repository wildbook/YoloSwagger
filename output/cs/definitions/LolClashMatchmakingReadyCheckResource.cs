using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashMatchmakingReadyCheckResource {
    [DataMember(Name = "state")]
    LolClashMatchmakingReadyCheckState State {get; set;}

    [DataMember(Name = "playerResponse")]
    LolClashMatchmakingReadyCheckResponse PlayerResponse {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashMatchmakingReadyCheckResource {\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  PlayerResponse: ").Append(PlayerResponse).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}