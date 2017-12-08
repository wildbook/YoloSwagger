using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryPlayerDelta
    {
        [DataMember(Name = "deltas")]
        LolMatchHistoryMatchHistoryPlayerGameDelta[] Deltas { get; set; }

        [DataMember(Name = "originalAccountId")]
        ulong OriginalAccountId { get; set; }

        [DataMember(Name = "originalPlatformId")]
        string OriginalPlatformId { get; set; }

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