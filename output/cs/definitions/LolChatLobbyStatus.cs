using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatLobbyStatus
    {
        [DataMember(Name = "customSpectatorPolicy")]
        public LolChatQueueCustomGameSpectatorPolicy CustomSpectatorPolicy { get; set; }

        [DataMember(Name = "isCustom")]
        public bool IsCustom { get; set; }

        [DataMember(Name = "isLeader")]
        public bool IsLeader { get; set; }

        [DataMember(Name = "isPracticeTool")]
        public bool IsPracticeTool { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatLobbyStatus {\n");
            sb.Append("  CustomSpectatorPolicy: ").Append(CustomSpectatorPolicy).Append("\n");
            sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
            sb.Append("  IsLeader: ").Append(IsLeader).Append("\n");
            sb.Append("  IsPracticeTool: ").Append(IsPracticeTool).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}