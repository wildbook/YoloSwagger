using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PublicSummonerDTO
    {
        [DataMember(Name = "acctId")]
        ulong AcctId { get; set; }

        [DataMember(Name = "internalName")]
        string InternalName { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "previousSeasonHighestTier")]
        string PreviousSeasonHighestTier { get; set; }

        [DataMember(Name = "profileIconId")]
        int ProfileIconId { get; set; }

        [DataMember(Name = "puuid")]
        string Puuid { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PublicSummonerDTO {\n");
            sb.Append("  AcctId: ").Append(AcctId).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PreviousSeasonHighestTier: ").Append(PreviousSeasonHighestTier).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}