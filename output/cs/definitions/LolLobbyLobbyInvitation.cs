using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyInvitation
    {
        [DataMember(Name = "toSummonerName")]
        string ToSummonerName { get; set; }

        [DataMember(Name = "eligibility")]
        LolLobbyEligibility Eligibility { get; set; }

        [DataMember(Name = "timestamp")]
        string Timestamp { get; set; }

        [DataMember(Name = "errorType")]
        string ErrorType { get; set; }

        [DataMember(Name = "toSummonerId")]
        ulong ToSummonerId { get; set; }

        [DataMember(Name = "state")]
        LolLobbyLobbyInvitationState State { get; set; }

        [DataMember(Name = "fromSummonerName")]
        string FromSummonerName { get; set; }

        [DataMember(Name = "fromSummonerId")]
        ulong FromSummonerId { get; set; }

        [DataMember(Name = "invitationMetaData")]
        dynamic InvitationMetaData { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyInvitation {\n");
            sb.Append("  ToSummonerName: ").Append(ToSummonerName).Append("\n");
            sb.Append("  Eligibility: ").Append(Eligibility).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  ErrorType: ").Append(ErrorType).Append("\n");
            sb.Append("  ToSummonerId: ").Append(ToSummonerId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  FromSummonerName: ").Append(FromSummonerName).Append("\n");
            sb.Append("  FromSummonerId: ").Append(FromSummonerId).Append("\n");
            sb.Append("  InvitationMetaData: ").Append(InvitationMetaData).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}