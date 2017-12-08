using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaverBusterNotificationResource
    {
        [DataMember(Name = "msgId")]
        string MsgId { get; set; }

        [DataMember(Name = "type")]
        LeaverBusterNotificationType Type { get; set; }

        [DataMember(Name = "id")]
        uint Id { get; set; }

        [DataMember(Name = "punishedGamesRemaining")]
        int PunishedGamesRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaverBusterNotificationResource {\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  PunishedGamesRemaining: ").Append(PunishedGamesRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}