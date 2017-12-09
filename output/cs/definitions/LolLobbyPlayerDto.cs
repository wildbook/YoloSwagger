using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPlayerDto
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "accountToken")]
        public string AccountToken { get; set; }

        [DataMember(Name = "createdAt")]
        public ulong CreatedAt { get; set; }

        [DataMember(Name = "currentParty")]
        public LolLobbyPartyDto? CurrentParty { get; set; }

        [DataMember(Name = "eligibilityHash")]
        public long EligibilityHash { get; set; }

        [DataMember(Name = "inventoryToken")]
        public string InventoryToken { get; set; }

        [DataMember(Name = "leaguesToken")]
        public string LeaguesToken { get; set; }

        [DataMember(Name = "parties")]
        public LolLobbyPartyMemberDto[] Parties { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerToken")]
        public string SummonerToken { get; set; }

        [DataMember(Name = "version")]
        public ulong Version { get; set; }

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