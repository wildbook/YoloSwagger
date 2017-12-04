using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyPremadeMemberDto {
    [DataMember(Name = "puuid")]
    string Puuid {get; set;}

    [DataMember(Name = "role")]
    LolLobbyPartyMemberRoleEnum Role {get; set;}

    [DataMember(Name = "partyId")]
    string PartyId {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyPremadeMemberDto {\n");
      sb.Append("  Puuid: ").Append(Puuid).Append("\n");
      sb.Append("  Role: ").Append(Role).Append("\n");
      sb.Append("  PartyId: ").Append(PartyId).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}