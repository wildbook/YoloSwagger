using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyPartyMemberDto {
    [DataMember(Name = "inviteTimestamp")]
    ulong InviteTimestamp {get; set;}

    [DataMember(Name = "invitedBySummonerId")]
    ulong InvitedBySummonerId {get; set;}

    [DataMember(Name = "platformId")]
    string PlatformId {get; set;}

    [DataMember(Name = "role")]
    LolLobbyPartyMemberRoleEnum Role {get; set;}

    [DataMember(Name = "gameMode")]
    LolLobbyGameModeDto GameMode {get; set;}

    [DataMember(Name = "ready")]
    bool Ready {get; set;}

    [DataMember(Name = "partyId")]
    string PartyId {get; set;}

    [DataMember(Name = "canInvite")]
    bool CanInvite {get; set;}

    [DataMember(Name = "puuid")]
    string Puuid {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "metadata")]
    LolLobbyPartyMemberMetadataDto Metadata {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyPartyMemberDto {\n");
      sb.Append("  InviteTimestamp: ").Append(InviteTimestamp).Append("\n");
      sb.Append("  InvitedBySummonerId: ").Append(InvitedBySummonerId).Append("\n");
      sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
      sb.Append("  Role: ").Append(Role).Append("\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  Ready: ").Append(Ready).Append("\n");
      sb.Append("  PartyId: ").Append(PartyId).Append("\n");
      sb.Append("  CanInvite: ").Append(CanInvite).Append("\n");
      sb.Append("  Puuid: ").Append(Puuid).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  Metadata: ").Append(Metadata).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}