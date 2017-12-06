using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyPlayerDto
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "accountToken")]
        string AccountToken { get; set; }

        [DataMember(Name = "createdAt")]
        ulong CreatedAt { get; set; }

        [DataMember(Name = "currentParty")]
        LolLobbyPartyDto? CurrentParty { get; set; }

        [DataMember(Name = "eligibilityHash")]
        long EligibilityHash { get; set; }

        [DataMember(Name = "inventoryToken")]
        string InventoryToken { get; set; }

        [DataMember(Name = "leaguesToken")]
        string LeaguesToken { get; set; }

        [DataMember(Name = "parties")]
        LolLobbyPartyMemberDto[] Parties { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "puuid")]
        string Puuid { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerToken")]
        string SummonerToken { get; set; }

        [DataMember(Name = "version")]
        ulong Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPlayerDto {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  AccountToken: ").Append(AccountToken).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  CurrentParty: ").Append(CurrentParty).Append("\n");
            sb.Append("  EligibilityHash: ").Append(EligibilityHash).Append("\n");
            sb.Append("  InventoryToken: ").Append(InventoryToken).Append("\n");
            sb.Append("  LeaguesToken: ").Append(LeaguesToken).Append("\n");
            sb.Append("  Parties: ").Append(Parties).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerToken: ").Append(SummonerToken).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}