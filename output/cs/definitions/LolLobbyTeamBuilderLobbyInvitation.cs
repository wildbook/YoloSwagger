using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderLobbyInvitation
    {
        [DataMember(Name = "invitationMetaData")]
        public dynamic InvitationMetaData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderLobbyInvitation {\n");
            sb.Append("  InvitationMetaData: ").Append(InvitationMetaData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}