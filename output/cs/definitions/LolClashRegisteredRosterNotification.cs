using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRegisteredRosterNotification
    {
        [DataMember(Name = "notifyReason")]
        LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "roster")]
        RosterDTO Roster { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRegisteredRosterNotification {\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  Roster: ").Append(Roster).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}