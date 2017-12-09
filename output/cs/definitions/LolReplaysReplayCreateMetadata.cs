using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysReplayCreateMetadata
    {
        [DataMember(Name = "gameEnd")]
        public ulong GameEnd { get; set; }

        [DataMember(Name = "gameType")]
        public string GameType { get; set; }

        [DataMember(Name = "gameVersion")]
        public string GameVersion { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplayCreateMetadata {\n");
            sb.Append("  GameEnd: ").Append(GameEnd).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}