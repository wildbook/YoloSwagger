using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRegisteredRosterNotification
    {
        [DataMember(Name = "notifyReason")]
        public LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "roster")]
        public RosterDTO Roster { get; set; }

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