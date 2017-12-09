using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLootGrantNotification
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "messageKey")]
        public string MessageKey { get; set; }

        [DataMember(Name = "msgId")]
        public string MsgId { get; set; }

        [DataMember(Name = "playerGrade")]
        public string PlayerGrade { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootGrantNotification {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  MessageKey: ").Append(MessageKey).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("  PlayerGrade: ").Append(PlayerGrade).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}