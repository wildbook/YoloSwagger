using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct SummonerLevel
    {
        [DataMember(Name = "expTierMod")]
        ulong ExpTierMod { get; set; }

        [DataMember(Name = "expToNextLevel")]
        ulong ExpToNextLevel { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint _SummonerLevel { get; set; }

        [DataMember(Name = "summonerTier")]
        ulong SummonerTier { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SummonerLevel {\n");
            sb.Append("  ExpTierMod: ").Append(ExpTierMod).Append("\n");
            sb.Append("  ExpToNextLevel: ").Append(ExpToNextLevel).Append("\n");
            sb.Append("  _SummonerLevel: ").Append(_SummonerLevel).Append("\n");
            sb.Append("  SummonerTier: ").Append(SummonerTier).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}