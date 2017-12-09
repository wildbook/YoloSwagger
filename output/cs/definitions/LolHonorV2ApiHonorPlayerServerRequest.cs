using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2ApiHonorPlayerServerRequest
    {
        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "honorCategory")]
        public string HonorCategory { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2ApiHonorPlayerServerRequest {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  HonorCategory: ").Append(HonorCategory).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}