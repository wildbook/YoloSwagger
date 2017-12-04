using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchResource {
    [DataMember(Name = "searchState")]
    LolLobbyLobbyMatchmakingSearchState SearchState {get; set;}

    [DataMember(Name = "errors")]
    LolLobbyLobbyMatchmakingSearchErrorResource[] Errors {get; set;}

    [DataMember(Name = "lowPriorityData")]
    LolLobbyLobbyMatchmakingLowPriorityDataResource LowPriorityData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyLobbyMatchmakingSearchResource {\n");
      sb.Append("  SearchState: ").Append(SearchState).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("  LowPriorityData: ").Append(LowPriorityData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}