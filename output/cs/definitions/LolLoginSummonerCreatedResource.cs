using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoginSummonerCreatedResource
    {
        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoginSummonerCreatedResource {\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}