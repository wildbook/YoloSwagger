using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRosterPlayerNotification
    {
        [DataMember(Name = "player")]
        PlayerDTO Player { get; set; }

        [DataMember(Name = "sourcePlayerId")]
        ulong SourcePlayerId { get; set; }

        [DataMember(Name = "notifyReason")]
        LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "roster")]
        RosterDTO Roster { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterPlayerNotification {\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  Roster: ").Append(Roster).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}