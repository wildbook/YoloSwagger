using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterPlayerNotification
    {
        [DataMember(Name = "notifyReason")]
        public LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "player")]
        public PlayerDTO Player { get; set; }

        [DataMember(Name = "roster")]
        public RosterDTO Roster { get; set; }

        [DataMember(Name = "sourcePlayerId")]
        public ulong SourcePlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterPlayerNotification {\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  Roster: ").Append(Roster).Append("\n");
            sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}