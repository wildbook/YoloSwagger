using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyInvitation
    {
        [DataMember(Name = "eligibility")]
        public LolLobbyEligibility Eligibility { get; set; }

        [DataMember(Name = "errorType")]
        public string ErrorType { get; set; }

        [DataMember(Name = "fromSummonerId")]
        public ulong FromSummonerId { get; set; }

        [DataMember(Name = "fromSummonerName")]
        public string FromSummonerName { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "invitationMetaData")]
        public dynamic InvitationMetaData { get; set; }

        [DataMember(Name = "state")]
        public LolLobbyLobbyInvitationState State { get; set; }

        [DataMember(Name = "timestamp")]
        public string Timestamp { get; set; }

        [DataMember(Name = "toSummonerId")]
        public ulong ToSummonerId { get; set; }

        [DataMember(Name = "toSummonerName")]
        public string ToSummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyInvitation {\n");
            sb.Append("  Eligibility: ").Append(Eligibility).Append("\n");
            sb.Append("  ErrorType: ").Append(ErrorType).Append("\n");
            sb.Append("  FromSummonerId: ").Append(FromSummonerId).Append("\n");
            sb.Append("  FromSummonerName: ").Append(FromSummonerName).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InvitationMetaData: ").Append(InvitationMetaData).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  ToSummonerId: ").Append(ToSummonerId).Append("\n");
            sb.Append("  ToSummonerName: ").Append(ToSummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}