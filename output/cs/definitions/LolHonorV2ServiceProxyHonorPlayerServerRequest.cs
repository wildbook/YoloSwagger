using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2ServiceProxyHonorPlayerServerRequest
    {
        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "honorType")]
        public string HonorType { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2ServiceProxyHonorPlayerServerRequest {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  HonorType: ").Append(HonorType).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}