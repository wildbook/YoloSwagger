using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyLobbyChangeGameDto {
    [DataMember(Name = "isCustom")]
    bool IsCustom {get; set;}

    [DataMember(Name = "customGameLobby")]
    LolLobbyLobbyCustomGameLobby CustomGameLobby {get; set;}

    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyLobbyChangeGameDto {\n");
      sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
      sb.Append("  CustomGameLobby: ").Append(CustomGameLobby).Append("\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}