using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderBackwardsTransitionInfoV1
    {
        [DataMember(Name = "backwardsTransitionReason")]
        public string BackwardsTransitionReason { get; set; }

        [DataMember(Name = "initiatorSummonerIds")]
        public ulong[] InitiatorSummonerIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderBackwardsTransitionInfoV1 {\n");
            sb.Append("  BackwardsTransitionReason: ").Append(BackwardsTransitionReason).Append("\n");
            sb.Append("  InitiatorSummonerIds: ").Append(InitiatorSummonerIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}