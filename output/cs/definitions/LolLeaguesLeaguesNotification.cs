using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeaguesNotification
    {
        [DataMember(Name = "acknowledgedByPlayer")]
        public bool AcknowledgedByPlayer { get; set; }

        [DataMember(Name = "data")]
        public LolLeaguesLeagueNotificationItem Data { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "priority")]
        public ulong Priority { get; set; }

        [DataMember(Name = "severity")]
        public LolLeaguesSeverity Severity { get; set; }

        [DataMember(Name = "titleType")]
        public string TitleType { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeaguesNotification {\n");
            sb.Append("  AcknowledgedByPlayer: ").Append(AcknowledgedByPlayer).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("  Severity: ").Append(Severity).Append("\n");
            sb.Append("  TitleType: ").Append(TitleType).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}