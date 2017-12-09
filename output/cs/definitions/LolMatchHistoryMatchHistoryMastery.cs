using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryMastery
    {
        [DataMember(Name = "masteryId")]
        public ushort MasteryId { get; set; }

        [DataMember(Name = "rank")]
        public ushort Rank { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryMastery {\n");
            sb.Append("  MasteryId: ").Append(MasteryId).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}