using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PublicSummonerDTO
    {
        [DataMember(Name = "acctId")]
        public ulong AcctId { get; set; }

        [DataMember(Name = "internalName")]
        public string InternalName { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "previousSeasonHighestTier")]
        public string PreviousSeasonHighestTier { get; set; }

        [DataMember(Name = "profileIconId")]
        public int ProfileIconId { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerLevel")]
        public uint SummonerLevel { get; set; }

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