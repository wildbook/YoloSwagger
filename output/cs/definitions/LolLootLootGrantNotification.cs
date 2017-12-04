using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootLootGrantNotification {
    [DataMember(Name = "messageKey")]
    string MessageKey {get; set;}

    [DataMember(Name = "lootName")]
    string LootName {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "msgId")]
    string MsgId {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "playerGrade")]
    string PlayerGrade {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootLootGrantNotification {\n");
      sb.Append("  MessageKey: ").Append(MessageKey).Append("\n");
      sb.Append("  LootName: ").Append(LootName).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  MsgId: ").Append(MsgId).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  PlayerGrade: ").Append(PlayerGrade).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}