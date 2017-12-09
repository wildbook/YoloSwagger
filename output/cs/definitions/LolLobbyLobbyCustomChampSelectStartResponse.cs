using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyCustomChampSelectStartResponse
    {
        [DataMember(Name = "failedPlayers")]
        public LolLobbyLobbyCustomFailedPlayer[] FailedPlayers { get; set; }

        [DataMember(Name = "success")]
        public bool Success { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyCustomChampSelectStartResponse {\n");
            sb.Append("  FailedPlayers: ").Append(FailedPlayers).Append("\n");
            sb.Append("  Success: ").Append(Success).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}