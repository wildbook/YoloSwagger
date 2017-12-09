using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MultipleReplayMetadataRequestV2
    {
        [DataMember(Name = "gameIds")]
        public ulong[] GameIds { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MultipleReplayMetadataRequestV2 {\n");
            sb.Append("  GameIds: ").Append(GameIds).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}