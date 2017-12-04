using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyPremadePartyDto {
    [DataMember(Name = "players")]
    LolLobbyPremadeMemberDto[] Players {get; set;}

    [DataMember(Name = "partyId")]
    string PartyId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyPremadePartyDto {\n");
      sb.Append("  Players: ").Append(Players).Append("\n");
      sb.Append("  PartyId: ").Append(PartyId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}