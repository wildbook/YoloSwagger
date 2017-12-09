using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameflowLcdsReconnectInfoDto
    {
        [DataMember(Name = "game")]
        public GameflowLcdsGameDTO Game { get; set; }

        [DataMember(Name = "playerCredentials")]
        public GameflowLcdsPlayerCredentialsDto PlayerCredentials { get; set; }

        [DataMember(Name = "reconnectDelay")]
        public uint ReconnectDelay { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameflowLcdsReconnectInfoDto {\n");
            sb.Append("  Game: ").Append(Game).Append("\n");
            sb.Append("  PlayerCredentials: ").Append(PlayerCredentials).Append("\n");
            sb.Append("  ReconnectDelay: ").Append(ReconnectDelay).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}