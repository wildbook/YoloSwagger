using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyCustomJoinParameters
    {
        [DataMember(Name = "asSpectator")]
        public bool? AsSpectator { get; set; }

        [DataMember(Name = "password")]
        public string Password { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyCustomJoinParameters {\n");
            sb.Append("  AsSpectator: ").Append(AsSpectator).Append("\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}