using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaverBusterNotificationResource
    {
        [DataMember(Name = "id")]
        public uint Id { get; set; }

        [DataMember(Name = "msgId")]
        public string MsgId { get; set; }

        [DataMember(Name = "punishedGamesRemaining")]
        public int PunishedGamesRemaining { get; set; }

        [DataMember(Name = "type")]
        public LeaverBusterNotificationType Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaverBusterNotificationResource {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("  PunishedGamesRemaining: ").Append(PunishedGamesRemaining).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}