using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksChampSelectSession {
    [DataMember(Name = "theirTeam")]
    LolPerksChampSelectPlayerSelection[] TheirTeam {get; set;}

    [DataMember(Name = "bans")]
    LolPerksChampSelectBannedChampions Bans {get; set;}

    [DataMember(Name = "trades")]
    LolPerksChampSelectTradeContract[] Trades {get; set;}

    [DataMember(Name = "isSpectating")]
    bool IsSpectating {get; set;}

    [DataMember(Name = "actions")]
    dynamic[] Actions {get; set;}

    [DataMember(Name = "myTeam")]
    LolPerksChampSelectPlayerSelection[] MyTeam {get; set;}

    [DataMember(Name = "timer")]
    LolPerksChampSelectTimer Timer {get; set;}

    [DataMember(Name = "chatDetails")]
    LolPerksChampSelectChatRoomDetails ChatDetails {get; set;}

    [DataMember(Name = "localPlayerCellId")]
    long LocalPlayerCellId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksChampSelectSession {\n");
      sb.Append("  TheirTeam: ").Append(TheirTeam).Append("\n");
      sb.Append("  Bans: ").Append(Bans).Append("\n");
      sb.Append("  Trades: ").Append(Trades).Append("\n");
      sb.Append("  IsSpectating: ").Append(IsSpectating).Append("\n");
      sb.Append("  Actions: ").Append(Actions).Append("\n");
      sb.Append("  MyTeam: ").Append(MyTeam).Append("\n");
      sb.Append("  Timer: ").Append(Timer).Append("\n");
      sb.Append("  ChatDetails: ").Append(ChatDetails).Append("\n");
      sb.Append("  LocalPlayerCellId: ").Append(LocalPlayerCellId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}