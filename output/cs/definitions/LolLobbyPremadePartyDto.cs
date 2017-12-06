using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyPremadePartyDto
    {
        [DataMember(Name = "partyId")]
        string PartyId { get; set; }

        [DataMember(Name = "players")]
        LolLobbyPremadeMemberDto[] Players { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPremadePartyDto {\n");
            sb.Append("  PartyId: ").Append(PartyId).Append("\n");
            sb.Append("  Players: ").Append(Players).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}