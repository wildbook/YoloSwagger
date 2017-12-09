using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MultipleReplayMetadataResponseV2
    {
        [DataMember(Name = "metadataResponses")]
        public MultipleReplayMetadataResponseItemV2[] MetadataResponses { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MultipleReplayMetadataResponseV2 {\n");
            sb.Append("  MetadataResponses: ").Append(MetadataResponses).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}