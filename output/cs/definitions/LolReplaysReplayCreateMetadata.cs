using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolReplaysReplayCreateMetadata
    {
        [DataMember(Name = "gameVersion")]
        string GameVersion { get; set; }

        [DataMember(Name = "gameEnd")]
        ulong GameEnd { get; set; }

        [DataMember(Name = "gameType")]
        string GameType { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplayCreateMetadata {\n");
            sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
            sb.Append("  GameEnd: ").Append(GameEnd).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}