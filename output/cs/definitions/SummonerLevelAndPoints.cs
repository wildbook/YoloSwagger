using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SummonerLevelAndPoints
    {
        [DataMember(Name = "expPoints")]
        public ulong ExpPoints { get; set; }

        [DataMember(Name = "infPoints")]
        public ulong InfPoints { get; set; }

        [DataMember(Name = "sumId")]
        public ulong SumId { get; set; }

        [DataMember(Name = "summonerLevel")]
        public uint SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SummonerLevelAndPoints {\n");
            sb.Append("  ExpPoints: ").Append(ExpPoints).Append("\n");
            sb.Append("  InfPoints: ").Append(InfPoints).Append("\n");
            sb.Append("  SumId: ").Append(SumId).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}