using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPlayerBehaviorReformCard
    {
        [DataMember(Name = "punishmentType")]
        string PunishmentType { get; set; }

        [DataMember(Name = "restrictedChatGamesRemaining")]
        long RestrictedChatGamesRemaining { get; set; }

        [DataMember(Name = "punishmentLengthTime")]
        ulong PunishmentLengthTime { get; set; }

        [DataMember(Name = "playerFacingMessage")]
        string PlayerFacingMessage { get; set; }

        [DataMember(Name = "punishmentLengthGames")]
        long PunishmentLengthGames { get; set; }

        [DataMember(Name = "reason")]
        string Reason { get; set; }

        [DataMember(Name = "chatLogs")]
        string[] ChatLogs { get; set; }

        [DataMember(Name = "timeWhenPunishmentExpires")]
        ulong TimeWhenPunishmentExpires { get; set; }

        [DataMember(Name = "gameIds")]
        ulong[] GameIds { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPlayerBehaviorReformCard {\n");
            sb.Append("  PunishmentType: ").Append(PunishmentType).Append("\n");
            sb.Append("  RestrictedChatGamesRemaining: ").Append(RestrictedChatGamesRemaining).Append("\n");
            sb.Append("  PunishmentLengthTime: ").Append(PunishmentLengthTime).Append("\n");
            sb.Append("  PlayerFacingMessage: ").Append(PlayerFacingMessage).Append("\n");
            sb.Append("  PunishmentLengthGames: ").Append(PunishmentLengthGames).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  ChatLogs: ").Append(ChatLogs).Append("\n");
            sb.Append("  TimeWhenPunishmentExpires: ").Append(TimeWhenPunishmentExpires).Append("\n");
            sb.Append("  GameIds: ").Append(GameIds).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}