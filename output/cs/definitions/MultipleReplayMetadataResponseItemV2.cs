using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MultipleReplayMetadataResponseItemV2
    {
        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "metadata")]
        public ReplayMetadataV2 Metadata { get; set; }

        [DataMember(Name = "status")]
        public ReplayResponseStatus Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MultipleReplayMetadataResponseItemV2 {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Metadata: ").Append(Metadata).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}