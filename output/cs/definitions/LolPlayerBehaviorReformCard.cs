using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPlayerBehaviorReformCard
    {
        [DataMember(Name = "chatLogs")]
        public string[] ChatLogs { get; set; }

        [DataMember(Name = "gameIds")]
        public ulong[] GameIds { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "playerFacingMessage")]
        public string PlayerFacingMessage { get; set; }

        [DataMember(Name = "punishmentLengthGames")]
        public long PunishmentLengthGames { get; set; }

        [DataMember(Name = "punishmentLengthTime")]
        public ulong PunishmentLengthTime { get; set; }

        [DataMember(Name = "punishmentType")]
        public string PunishmentType { get; set; }

        [DataMember(Name = "reason")]
        public string Reason { get; set; }

        [DataMember(Name = "restrictedChatGamesRemaining")]
        public long RestrictedChatGamesRemaining { get; set; }

        [DataMember(Name = "timeWhenPunishmentExpires")]
        public ulong TimeWhenPunishmentExpires { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPlayerBehaviorReformCard {\n");
            sb.Append("  ChatLogs: ").Append(ChatLogs).Append("\n");
            sb.Append("  GameIds: ").Append(GameIds).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  PlayerFacingMessage: ").Append(PlayerFacingMessage).Append("\n");
            sb.Append("  PunishmentLengthGames: ").Append(PunishmentLengthGames).Append("\n");
            sb.Append("  PunishmentLengthTime: ").Append(PunishmentLengthTime).Append("\n");
            sb.Append("  PunishmentType: ").Append(PunishmentType).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  RestrictedChatGamesRemaining: ").Append(RestrictedChatGamesRemaining).Append("\n");
            sb.Append("  TimeWhenPunishmentExpires: ").Append(TimeWhenPunishmentExpires).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}