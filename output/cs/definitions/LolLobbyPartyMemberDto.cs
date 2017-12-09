using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyMemberDto
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "canInvite")]
        public bool? CanInvite { get; set; }

        [DataMember(Name = "gameMode")]
        public LolLobbyGameModeDto? GameMode { get; set; }

        [DataMember(Name = "inviteTimestamp")]
        public ulong? InviteTimestamp { get; set; }

        [DataMember(Name = "invitedBySummonerId")]
        public ulong? InvitedBySummonerId { get; set; }

        [DataMember(Name = "metadata")]
        public LolLobbyPartyMemberMetadataDto Metadata { get; set; }

        [DataMember(Name = "partyId")]
        public string PartyId { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "ready")]
        public bool? Ready { get; set; }

        [DataMember(Name = "role")]
        public LolLobbyPartyMemberRoleEnum Role { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyMemberDto {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  CanInvite: ").Append(CanInvite).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  InviteTimestamp: ").Append(InviteTimestamp).Append("\n");
            sb.Append("  InvitedBySummonerId: ").Append(InvitedBySummonerId).Append("\n");
            sb.Append("  Metadata: ").Append(Metadata).Append("\n");
            sb.Append("  PartyId: ").Append(PartyId).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}