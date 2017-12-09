using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysReplayMetadata
    {
        [DataMember(Name = "downloadProgress")]
        public uint DownloadProgress { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "state")]
        public LolReplaysMetadataState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplayMetadata {\n");
            sb.Append("  DownloadProgress: ").Append(DownloadProgress).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}