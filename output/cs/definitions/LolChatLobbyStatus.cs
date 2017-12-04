using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatLobbyStatus {
    [DataMember(Name = "isCustom")]
    bool IsCustom {get; set;}

    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "isLeader")]
    bool IsLeader {get; set;}

    [DataMember(Name = "isPracticeTool")]
    bool IsPracticeTool {get; set;}

    [DataMember(Name = "customSpectatorPolicy")]
    LolChatQueueCustomGameSpectatorPolicy CustomSpectatorPolicy {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatLobbyStatus {\n");
      sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  IsLeader: ").Append(IsLeader).Append("\n");
      sb.Append("  IsPracticeTool: ").Append(IsPracticeTool).Append("\n");
      sb.Append("  CustomSpectatorPolicy: ").Append(CustomSpectatorPolicy).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}