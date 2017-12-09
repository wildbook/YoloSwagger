using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryRune
    {
        [DataMember(Name = "rank")]
        public ushort Rank { get; set; }

        [DataMember(Name = "runeId")]
        public ushort RuneId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryRune {\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  RuneId: ").Append(RuneId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}