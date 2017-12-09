using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SummonerLevel
    {
        [DataMember(Name = "expTierMod")]
        public ulong ExpTierMod { get; set; }

        [DataMember(Name = "expToNextLevel")]
        public ulong ExpToNextLevel { get; set; }

        [DataMember(Name = "summonerLevel")]
        public uint _SummonerLevel { get; set; }

        [DataMember(Name = "summonerTier")]
        public ulong SummonerTier { get; set; }

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