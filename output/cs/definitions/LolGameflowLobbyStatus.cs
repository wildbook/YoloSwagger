using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowLobbyStatus
    {
        [DataMember(Name = "allowedPlayAgain")]
        public bool AllowedPlayAgain { get; set; }

        [DataMember(Name = "customSpectatorPolicy")]
        public LolGameflowQueueCustomGameSpectatorPolicy CustomSpectatorPolicy { get; set; }

        [DataMember(Name = "invitedSummonerIds")]
        public ulong[] InvitedSummonerIds { get; set; }

        [DataMember(Name = "isCustom")]
        public bool IsCustom { get; set; }

        [DataMember(Name = "isLeader")]
        public bool IsLeader { get; set; }

        [DataMember(Name = "isPracticeTool")]
        public bool IsPracticeTool { get; set; }

        [DataMember(Name = "isSpectator")]
        public bool IsSpectator { get; set; }

        [DataMember(Name = "lobbyId")]
        public string LobbyId { get; set; }

        [DataMember(Name = "memberSummonerIds")]
        public ulong[] MemberSummonerIds { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowLobbyStatus {\n");
            sb.Append("  AllowedPlayAgain: ").Append(AllowedPlayAgain).Append("\n");
            sb.Append("  CustomSpectatorPolicy: ").Append(CustomSpectatorPolicy).Append("\n");
            sb.Append("  InvitedSummonerIds: ").Append(InvitedSummonerIds).Append("\n");
            sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
            sb.Append("  IsLeader: ").Append(IsLeader).Append("\n");
            sb.Append("  IsPracticeTool: ").Append(IsPracticeTool).Append("\n");
            sb.Append("  IsSpectator: ").Append(IsSpectator).Append("\n");
            sb.Append("  LobbyId: ").Append(LobbyId).Append("\n");
            sb.Append("  MemberSummonerIds: ").Append(MemberSummonerIds).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}