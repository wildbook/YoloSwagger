using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryPlayerDelta
    {
        [DataMember(Name = "deltas")]
        public LolMatchHistoryMatchHistoryPlayerGameDelta[] Deltas { get; set; }

        [DataMember(Name = "originalAccountId")]
        public ulong OriginalAccountId { get; set; }

        [DataMember(Name = "originalPlatformId")]
        public string OriginalPlatformId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPlayerDelta {\n");
            sb.Append("  Deltas: ").Append(Deltas).Append("\n");
            sb.Append("  OriginalAccountId: ").Append(OriginalAccountId).Append("\n");
            sb.Append("  OriginalPlatformId: ").Append(OriginalPlatformId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}