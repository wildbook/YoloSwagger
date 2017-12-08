using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolHonorV2HonorRecipient
    {
        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "honors")]
        LolHonorV2Honor[] Honors { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2HonorRecipient {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Honors: ").Append(Honors).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}