using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyMatchmakingSearchResource
    {
        [DataMember(Name = "errors")]
        public LolLobbyLobbyMatchmakingSearchErrorResource[] Errors { get; set; }

        [DataMember(Name = "lowPriorityData")]
        public LolLobbyLobbyMatchmakingLowPriorityDataResource LowPriorityData { get; set; }

        [DataMember(Name = "searchState")]
        public LolLobbyLobbyMatchmakingSearchState SearchState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyMatchmakingSearchResource {\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  LowPriorityData: ").Append(LowPriorityData).Append("\n");
            sb.Append("  SearchState: ").Append(SearchState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}