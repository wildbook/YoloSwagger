using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPremadePartyDto
    {
        [DataMember(Name = "partyId")]
        public string PartyId { get; set; }

        [DataMember(Name = "players")]
        public LolLobbyPremadeMemberDto[] Players { get; set; }

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