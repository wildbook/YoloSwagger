using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowPlayerStatus
    {
        [DataMember(Name = "currentLobbyStatus")]
        public LolGameflowLobbyStatus? CurrentLobbyStatus { get; set; }

        [DataMember(Name = "lastQueuedLobbyStatus")]
        public LolGameflowLobbyStatus? LastQueuedLobbyStatus { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowPlayerStatus {\n");
            sb.Append("  CurrentLobbyStatus: ").Append(CurrentLobbyStatus).Append("\n");
            sb.Append("  LastQueuedLobbyStatus: ").Append(LastQueuedLobbyStatus).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}