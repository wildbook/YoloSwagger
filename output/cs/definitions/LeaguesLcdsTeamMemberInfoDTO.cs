using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsTeamMemberInfoDTO
    {
        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        [DataMember(Name = "playerName")]
        public string PlayerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsTeamMemberInfoDTO {\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  PlayerName: ").Append(PlayerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}