using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyInviteDto
    {
        [DataMember(Name = "gameMode")]
        public LolLobbyGameModeDto GameMode { get; set; }

        [DataMember(Name = "invitedByPuuid")]
        public string InvitedByPuuid { get; set; }

        [DataMember(Name = "partyId")]
        public string PartyId { get; set; }

        [DataMember(Name = "partyVersion")]
        public int PartyVersion { get; set; }

        [DataMember(Name = "state")]
        public string State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyInviteDto {\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  InvitedByPuuid: ").Append(InvitedByPuuid).Append("\n");
            sb.Append("  PartyId: ").Append(PartyId).Append("\n");
            sb.Append("  PartyVersion: ").Append(PartyVersion).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}