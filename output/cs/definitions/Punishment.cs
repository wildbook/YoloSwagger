using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct Punishment
    {
        [DataMember(Name = "punishedForChatLogs")]
        string[] PunishedForChatLogs { get; set; }

        [DataMember(Name = "punishmentReason")]
        string PunishmentReason { get; set; }

        [DataMember(Name = "punishmentType")]
        string PunishmentType { get; set; }

        [DataMember(Name = "playerFacingMessage")]
        string PlayerFacingMessage { get; set; }

        [DataMember(Name = "punishedUntilDateMillis")]
        ulong PunishedUntilDateMillis { get; set; }

        [DataMember(Name = "punishedForGameIds")]
        ulong[] PunishedForGameIds { get; set; }

        [DataMember(Name = "punishmentLengthGames")]
        long PunishmentLengthGames { get; set; }

        [DataMember(Name = "permaBan")]
        bool PermaBan { get; set; }

        [DataMember(Name = "punishmentLengthMillis")]
        ulong PunishmentLengthMillis { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Punishment {\n");
            sb.Append("  PunishedForChatLogs: ").Append(PunishedForChatLogs).Append("\n");
            sb.Append("  PunishmentReason: ").Append(PunishmentReason).Append("\n");
            sb.Append("  PunishmentType: ").Append(PunishmentType).Append("\n");
            sb.Append("  PlayerFacingMessage: ").Append(PlayerFacingMessage).Append("\n");
            sb.Append("  PunishedUntilDateMillis: ").Append(PunishedUntilDateMillis).Append("\n");
            sb.Append("  PunishedForGameIds: ").Append(PunishedForGameIds).Append("\n");
            sb.Append("  PunishmentLengthGames: ").Append(PunishmentLengthGames).Append("\n");
            sb.Append("  PermaBan: ").Append(PermaBan).Append("\n");
            sb.Append("  PunishmentLengthMillis: ").Append(PunishmentLengthMillis).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}