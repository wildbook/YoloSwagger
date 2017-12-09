using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysRoflFileMetadata
    {
        [DataMember(Name = "gameLength")]
        public uint GameLength { get; set; }

        [DataMember(Name = "gameVersion")]
        public string GameVersion { get; set; }

        [DataMember(Name = "lastGameChunkId")]
        public uint LastGameChunkId { get; set; }

        [DataMember(Name = "lastKeyFrameId")]
        public uint LastKeyFrameId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysRoflFileMetadata {\n");
            sb.Append("  GameLength: ").Append(GameLength).Append("\n");
            sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
            sb.Append("  LastGameChunkId: ").Append(LastGameChunkId).Append("\n");
            sb.Append("  LastKeyFrameId: ").Append(LastKeyFrameId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}